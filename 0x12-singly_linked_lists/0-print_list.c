#include "lists.h"

/**
 * print_list - display elements of list
 * @h: linked list
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *head = h;

while (head != null)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s", head->len, head->str);


count += 1;
head = head->next;
}

return (count);

}
