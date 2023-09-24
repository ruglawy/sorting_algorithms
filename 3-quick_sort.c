#include "sort.h"
/**
 * swap_items - swaps two items
 *
 * @array: ..
 * @l: ...
 * @r: ...
 *
 * Return: void
 */
void swap_items(int *array, size_t l, size_t r)
{
	int temp;

	if (array != NULL)
	{
		temp = array[l];
		array[l] = array[r];
		array[r] = temp;
	}
}

void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size)
{
	size_t i, k;
	int pivot;

	if ((low >= high) || (array == NULL))
	{
		return;
	}
	pivot = array[high];
	k = low;
	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			if (k != i)
			{
				swap_items(array, k, i);
				print_array(array, size);
			}
			k++;
		}
	}
	if (k != high)
	{
		swap_items(array, k, high);
		print_array(array, size);
	}
	if (k - low > 1)
	{
		quick_sort_range_lomuto(array, low, k - 1, size);
	}
	if (high - k > 1)
	{
		quick_sort_range_lomuto(array, k + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_range_lomuto(array, 0, size - 1, size);
	}
}
