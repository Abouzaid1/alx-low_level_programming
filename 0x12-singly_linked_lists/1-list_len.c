#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * list-len - length of the list
 * @h: first node 
 * 
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		h= h->next;
		i++;
	}
	return(i);
}