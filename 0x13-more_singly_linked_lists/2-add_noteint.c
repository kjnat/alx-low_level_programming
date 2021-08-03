#include "lists.h"
/**
 * add_nodeint - function that adds new node at the beginning of a list
 * @h: a pointer to the address of the head of the list
 * @n: integer of the element
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = head;

	*head = new;

	return (new);
}
