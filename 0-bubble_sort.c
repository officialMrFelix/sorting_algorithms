#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - sorts an int array in ascending order using Bubble sort algo
 * @array: pointer to the given set of data
 * @size: size of the array given
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	bool swap;

	if (array == NULL)
		return;

	do {
		swap = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
				print_array(array, size);
			}
		}
	} while (swap);
}
