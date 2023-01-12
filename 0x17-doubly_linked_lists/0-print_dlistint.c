#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
{
	struct dlistint_s* head;
	struct dlistint_s* first = NULL;
	struct dlistint_s* second = NULL;
	struct dlistint_s* third = NULL;
	struct dlistint_s* fourth = NULL;

	first = (struct dlistint_s*)malloc(sizeof(struct dlistint_s));
	second = (struct dlistint_s*)malloc(sizeof(struct dlistint_s));
	third = (struct dlistint_s*)malloc(sizeof(struct dlistint_s));
	fourth = (struct dlistint_s*)malloc(sizeof(struct dlistint_s));

	first->next = second;
	first->prev = NULL;
	second->next = third;
	second->prev = first;
	third->next = fourth;
	third->prev = third;
	fourth->next = NULL;
	fourth->prev = third;

	head = first;
		display(first);

		return (0);
}

