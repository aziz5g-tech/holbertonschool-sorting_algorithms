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
	/* Store the value at index i in a temporary variable */
	int temp = array[i];
	/* Assign the value at index j to index i */
	array[i] = array[j];
	/* Assign the value stored in the temporary variable to index j */
	array[j] = temp;
}
