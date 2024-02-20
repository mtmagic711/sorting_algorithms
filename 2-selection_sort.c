#include "sort.h"

/**
* selection_sort - sorts an array of integers in
* ascending order using the Selection sort algorithm.
* @array: the array to sort.
* @size: the size of the array.
* Return: Always 0.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (*(array + min) > *(array + j))
				min = j;
		}
		if (min != i)
		{
			temp = *(array + i);
			*(array + i) = *(array + min);
			*(array + min) = temp;
			print_array(array, size);
		}
	}
}
