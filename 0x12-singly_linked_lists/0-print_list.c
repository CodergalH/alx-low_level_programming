#include "lists.h"

/**
 * print_list - display elements of list
 * @h: linked list
 */

size_t print_list(const list_t *h)
{

list_t *prt;
list_t *head = h;

if (head != null)
{
if (head->str == NULL)
{
printf("[0] (nil)\n");
head = head->next
}

printf("[%d] %s", head->len, head->str);
head = head->next;
}

}
