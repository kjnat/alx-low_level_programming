#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to the address of the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		temp = head->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
