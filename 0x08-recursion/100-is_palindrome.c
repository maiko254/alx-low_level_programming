#include "main.h"
int _strlen(char *s);
int check(char *s, int len, int index);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check(s, len, i));
}

/**
 * _strlen - checks length of string
 * @s: string to check
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check - checks if string is palindrome
 * @s: string to check
 * @len: length of string s
 * @index: index of string to check
 *
 * Return: 1 is palindrome, 0 if not
 */

int check(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check(s, len, index + 1));

	return (0);
}
