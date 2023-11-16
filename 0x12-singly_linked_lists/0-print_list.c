#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check Holberton School students.
 * @list: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *list)
{
	int count = 0;

	while (list)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", list->len, list->str);
		}
		count++;
		list = list->next;
	}
	return (count);
}
