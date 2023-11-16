#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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