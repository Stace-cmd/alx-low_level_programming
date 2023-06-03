#include "lists.h"
#include <stdlib.h>
/**
* free_list - Frees a list_t list.
* @head: A pointer to the head of the list_t list to be freed.
*
* Description: Frees each node of a linked list and its string.
*              The head pointer is updated accordingly.
*/
void free_list(list_t *head)
{
list_t *current_node;
while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node->str);
free(current_node);
}
}

