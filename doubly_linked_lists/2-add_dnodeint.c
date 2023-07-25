#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- adds a node at the beggining of a double linked list
 *
 * @head: pointer to the first node of the list
 * @n: element of the node
 *
 * Return: pointer to the first node of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = tmp;

	*head = new;

	return (*head);
}
