#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr;
	listint_t *nx;

	pr = NULL;
	nx = NULL;

	while (*head != NULL)
	{
		nx = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = nx;
	}

	*head = pr;
	return (*head);
}
