# 0x1A. C - Hash tables

### Task 0. >>> ht = {} 
* 0-hash_table_create.c - Write a function that creates a hash table.
   * Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
      * where `size` is the size of the array
   * Returns a pointer to the newly created hash table
   * If something went wrong, your function should return `NULL`

### Task 1. djb2 
* 1-djb2.c - Write a hash function implementing the djb2 algorithm.
   * Prototype `unsigned long int hash_djb2(const unsigned char *str);`
