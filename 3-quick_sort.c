#include "sort.h"

/**
* partition - lamuto partition scheme
* @array: Array of integers
* @lower: lowest number in the array
* @higher: Highest number in the array
* @size: Size of the array
* Return: Index
**/

int partition(int *array, int lower, int higher, int size)
{
	int pvt = array[higher];
	int idx = lower;
	int tmp, i = 0;

	for (i = lower; i < higher; i++)
	{
		if (pvt >= array[i])
		{
			if (idx != i)
			{
				tmp = array[idx];
				array[idx] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			idx++;
		}
	}
	if (idx != i)
	{
		tmp = array[idx];
		array[idx] = array[higher];
		array[higher] = tmp;
		print_array(array, size);
	}
	return (idx);
}

/**
* pivot_setter- Function for setting the pivot using recursion
* @array: Array of integers
* @size: Size of the array
* @low: lowest number in the array
* @high: highest number in the array
* Return: Void
**/

void pivot_setter(int *array, int low, int high, int size)
{
	int pi = 0;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		pivot_setter(array, low, pi - 1, size);
		pivot_setter(array, pi + 1, high, size);
	}
}

/**
* quick_sort - Sorts an array of integers in ascending order
* using the Quick sort algorithm
* @array: Array of integers
* @size: Size of the array
* Return: Void - No return
**/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	pivot_setter(array, 0, (int)size - 1, (int)size);
}
