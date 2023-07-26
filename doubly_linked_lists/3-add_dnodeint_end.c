#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- adds a new node int the end of a doubly linked list
 *
 * @head: pointer to the first node of the list
 * @n: data of the new node
 *
 * Return: pointer to the first node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
		new->prev = tmp;
		tmp = new;
	}

	return (*head);
}
