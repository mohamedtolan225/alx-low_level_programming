#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t
 * @h: takes in a const struct type *h
 * Return: returns the counter
 */
size_t print_listint(const listint_t *h)
{
size_t con = 0;
const listint_t *move = h;
if (move == NULL)
return (0);
while (move != NULL)
{
printf("%d\n", move->n);
move = move->next;
con++;
}
return (con);
}
