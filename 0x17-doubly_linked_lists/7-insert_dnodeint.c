#include "lists.h"
#include <stdlib.h>

/**
  * insert_dnodeint_at_index - inserts a new node at given pos
  * @head: head of list
  * @idx: pos
  * @n: data
  *
  * Return: pointer to new node, NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i = -1;
	dlistint_t *ptr = (void *)'\0';

	if (idx == 0)
		ptr = add_dnodeint(head, n);
	else if (head)
	{
		ptr = *head;
		while (ptr && i + 2 < idx)
		{
			ptr = ptr->next;
			i++;
		}
		if (ptr && i + 2 == idx)
		{
			add_dnodeint(&(ptr->next), n);
			ptr->next->prev = ptr;
			ptr = ptr->next;
		}
		else
			ptr = (void *)'\0';
	}
	return (ptr);
}
