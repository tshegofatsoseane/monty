#include "monty.h"
/**
* free_stack - functin to free linked list
* @head: head
*/
void free_stack(stack_t *head)
{
  stack_t *aux;

  aux = head;
  while (head)
  {
    aux = head->next;
    free(head);
    head = aux;
  }
}
