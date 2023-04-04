#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *cr;

	if (*head == NULL)
		return (0);

	cr = *head;

	hnode = cr->n;

	h = cr->next;

	free(cr);

	*head = h;

	return (hnode);
}
