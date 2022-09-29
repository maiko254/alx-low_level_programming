#include "main.h"
int _strlen(char *s);
void iterate_wild(char **wildcard);
char *postfix_match(char *str, char *postfix);

/**
 * wildcmp - compares if two strings are identical
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

/**
 * _strlen - finds length of string ignoring * wildcard
 * @s: string to measure
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			l++;

		i++;
		l = 1 + _strlen(s + i);
	}

	return (l);
}

/**
 * iterate_wild - iterates string wildcard till it points to non-wildcars
 * @wildcard: string to iiterate
 */

void iterate_wild(char **wildcard)
{
	if (**wildcard == '*')	
	{
		(*wildcard)++;
		iterate_wild(wildcard);
	}
}

/**
 * postfix_match - checks if string str matches the postfix of another
 * string that might contain wildcards
 *
 * @str: string to match
 * @postfix: the postfix
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = _strlen(str) - 1;
	int postfix_len = _strlen(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}
