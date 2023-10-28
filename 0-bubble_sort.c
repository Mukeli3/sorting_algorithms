#include "sort.h"

/**
 * swap - function swaps two integers
 * @i: first int
 * @j: second int
 *
 * Return: nothing
 */
void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * bubble_sort - function sorts an array of integers in ascending order
 * @array: integers to sort
 * @size: array size
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j = size;
	bool swapped;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < j - 1; i++)
		{
			swapped = false;
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swapped = false;
			}
		}
		j--;
	}
}
