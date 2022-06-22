#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* struct listint_s - Doubly linked list node
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
**/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** PRINTER FUNCTIONS **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/** HELPER FUNCTIONS **/
void swap(int *a, int *b);
listint_t *swap_node(listint_t *node, listint_t **list);
int partition(int *array, int lower, int higher, int size);
void pivot_setter(int *array, int low, int high, int size);

/** ALGORITHM FUNCTIONS **/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
