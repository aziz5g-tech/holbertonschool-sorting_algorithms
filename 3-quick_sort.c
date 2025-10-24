#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 * @array: The array containing the integers.
 * @i: The index of the first integer to be swapped.
 * @j: The index of the second integer to be swapped.
 *
 * Return: This function does not return a value.
 */
void swap(int *array, size_t i, size_t j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

/**
 * lomuto_partition - Partitions a portion of an array using the Lomuto
 *                    partition scheme.
 * @array: Pointer to the array of integers to be partitioned.
 * @low: The low index of the portion to be partitioned.
 * @high: The high index of the portion to be partitioned.
 * @size: The size of the array.
 *
 * Return: The index of the pivot in the partitioned array.
 */

static int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(array, i + 1, high);
	if (high != (i + 1))
		print_array(array, size);

	return (i + 1);
}
