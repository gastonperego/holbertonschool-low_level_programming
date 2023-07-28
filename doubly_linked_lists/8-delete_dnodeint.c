#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index- deletes a node of a doubly linked list
 *
 * @head: pointer to the first node of the dirst node
 * @index: position of the node to be deleted
 *
 * Return: return 1 if succeded and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = NULL; }
		else
		{
			tmp->next->prev = NULL;
			*head = tmp->next;
			free(tmp); } }
	else
	{
		while (tmp && count != index)
		{
			tmp = tmp->next;
			count++; }
		if (count < index)
			return (-1);
		if (tmp->next == NULL)
		{
			tmp->prev->next = NULL;
			free(tmp); }
		else
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
		 } } return (1); }
