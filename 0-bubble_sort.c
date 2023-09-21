#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array which entered.
 * @size: size of entered array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t flag = 1, i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 0;
				print_array(array, size);
			}
		if (flag == 1)
			/*means that elements are already sorted. that is the best case O(N)*/
			break;
	}
}

