#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: linked list
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}

