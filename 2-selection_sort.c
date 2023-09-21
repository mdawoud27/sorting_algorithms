#include "sort.h"
#include "swap.c"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array which entered.
 * @size: size of the entered array.
 */
void selection_sort(int *array, size_t size)
{
	size_t minIndx, i, j;

	for (i = 0; i < size - 1; i++)
	{
		minIndx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndx])
				minIndx = j;
		}
		swap(&array[minIndx], &array[i]);
		print_array(array, size);
	}
}
