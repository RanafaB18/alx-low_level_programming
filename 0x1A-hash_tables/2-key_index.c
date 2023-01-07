#include "hash_tables.h"
/**
 * key_index - Gets index of the key
 * @key: key
 * @size: size of array
 *
 * Return: index of array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index = hash_djb2(key);
    return (index);
}
