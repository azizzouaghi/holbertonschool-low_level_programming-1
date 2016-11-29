#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: linked list
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
