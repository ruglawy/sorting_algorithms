#include "sort.h"
/**
 * selection_sort - ...
 *
 * @array: ...
 * @size: ...
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, st, min_index;
	int temp;

	for (st = 0; st < size - 1; st++)
	{
		min_index = st;
		for (i = st + 1; i < size; i++)
		{
			if (array[i] < array[min_index])
			{
				min_index = i;
			}
		}
		if (min_index != st)
		{
			temp = array[st];
			array[st] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
