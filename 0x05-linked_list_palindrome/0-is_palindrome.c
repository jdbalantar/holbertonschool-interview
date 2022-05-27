#include "lists.h"

/**
 * recursive_check - recursive_check function 
 * @start: start
 * @end: end
 * Return: Either 0 or 1 depending if is a palindrome
 */
int recursive_check(listint_t **start, listint_t *end)
{
	int check;

	if (end == NULL)
		return (1);
	check = recursive_check(start, end->next);
	if (check == 0)
		return (0);

	if ((*start)->n == end->n)
		check = 1;
	else
		check = 0;
	*start = (*start)->next;
	return (check);
}
/**
 * is_palindrome - This function Check if a singly linked list is a palindrome
 * @head: Head of the linked list
 * Return: Integer"0 if it is not a palindrome, 1 if it is a palindrome"
 */
int is_palindrome(listint_t **head)
{
	listint_t **start = head;
	listint_t *end = *head;

	if (*head == NULL)

		return (1);
    return (recursive_check(start, end));
}