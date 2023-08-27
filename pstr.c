#include "monty.h"
/**
 * f_pstr - function to print string at the top of the stack
 * @head: head
 * @counter: number
 * Return: results
*/
void f_pstr(stack_t **head, unsigned int counter)
{
  stack_t *h;
  (void)counter;

  h = *head;
  while (h)
  {
    if (h->n > 127 || h->n <= 0)
    {
      break;
    }
    printf("%c", h->n);
    h = h->next;
  }
  printf("\n");
}
