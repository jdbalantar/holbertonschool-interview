#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - singly linked list has a cycle
 * @list: fisrt parameter
 * 
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast_linked = list;
	listint_t *slow = list;

	while (fast_linked != NULL && slow != NULL)
	{
		slow = slow->next;
		if (fast_linked->next == NULL)
			return (0);
		fast_linked = fast_linked->next;
		fast_linked = fast_linked->next;

		if (fast_linked == slow)
			return (1);
	}
	return (0);
}