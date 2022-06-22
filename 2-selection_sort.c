#include "sort.h"

/**
* selection_sort - choose the min number and swap between the initial
* @array: array of integers
* @size: size of the array
* Return: void
*/

void selection_sort(int *array, size_t size)
{
	unsigned int x, y, idx, swap;
	int small;

	if (size <= 1)
		return;

	for (y = 0; y < size; y++)
	{
		swap = 0;
		small = array[y];
		for (x = y; x < size; x++)
		{
			if (array[x] < small)
				small = array[x], idx = x, swap = 1;
		}

		if (swap == 1)
		{
			array[idx] = array[y];
			array[y] = small;
			print_array(array, size);
		}
	}
}
