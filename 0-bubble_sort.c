#include "sort.h"
/**
 * bubble_sort - ...
 *
 * @array: ...
 * @size: ...
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, sorted;

	sorted = 0;
	if (size == 0)
	{
		return;
	}
	while (sorted == 0)
	{
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
