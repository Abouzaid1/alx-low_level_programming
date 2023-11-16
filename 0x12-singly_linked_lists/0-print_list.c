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
*print_list - Prints all the elements of a list_t list.
*@h: The head of the list.
*Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

while (h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", _strlen(h->str), h->str);
	}
	h = h->next;
	count++;
}
return (count);
}
