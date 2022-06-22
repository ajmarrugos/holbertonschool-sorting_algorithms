#include "sort.h"

/**
* swap - Swaps the value of a and b
* @a: pointer to the first integer
* @b: pointer to the second integer
* Return: Nothing
**/

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* bubble_sort - Bubble sort algorithm
* @array: The array to be printed
* @size: Number of elements in @array
* Return: Nothing
**/

void bubble_sort(int *array, size_t size)
{
	size_t idx, tmp;

	if (size < 2)
		return;

	for (idx = 0; idx < size - 1; idx++)
		for (tmp = 0; tmp < size - idx - 1; tmp++)
			if (array[tmp] > array[tmp + 1])
			{
				swap(&array[tmp], &array[tmp + 1]);
				print_array(array, size);
			}
}
