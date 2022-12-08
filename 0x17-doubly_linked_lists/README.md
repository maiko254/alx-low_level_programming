# 0x17. C - Doubly linked lists

### Task 0 
* 0-print_dlistint.c - Write a function that prints all the elements of a `dlistint_t` list
   * Prototype: `size_t print_dlistint(const dlistint_t *h);`
   * Return: the number of nodes

### Task 1
* 1-dlistint_len.c - Write a function that returns the number of elements in a linked `dlistint_t` list.
   * Prototype: `size_t dlistint_len(const dlistint_t *h);`

### Task 2
* 2-add_dnodeint.c - Write a function that adds a new node at the beginning of a `dlistint_t` list.
   * Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
   * Return: the address of the new element, or `NULL` if it failed

### Task 3
* 3-add_dnodeint_end.c - Write a function that adds a new node at the end of a `dlistint_t` list.
   * Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
   * Return: the address of the new element, or `NULL` if it failed
