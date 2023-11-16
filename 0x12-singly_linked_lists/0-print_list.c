#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The head of the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
<<<<<<< HEAD
	int count = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
=======
    size_t count = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        count++;
        h = h->next;
    }
    return (count);
>>>>>>> 9840529fb6cdf2b34d7c517c5b12019ecc552e38
}

