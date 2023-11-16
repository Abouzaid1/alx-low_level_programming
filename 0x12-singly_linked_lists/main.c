#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added to the list.
 * 
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *add;

    if (str == NULL)
        return (NULL);

    add = malloc(sizeof(list_t));
    if (add == NULL)
        return (NULL);

    add->str = strdup(str);
    if (add->str == NULL)
    {
        free(add);
        return (NULL);
    }

    add->len = strlen(str);
    add->next = *head;
    *head = add;

    return (add);
}
