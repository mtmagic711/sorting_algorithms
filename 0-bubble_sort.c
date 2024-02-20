#include "sort.h"

/**
* bubble_sort -  sorts an array of integers in ascending order using
* the Bubble sort algorithm.
* @array: the array to sort.
* @size: the size of the array.
* Return: Always 0.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k = 0;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
				for (k = 0; k < size; k++)
				{
					printf("%d%s", array[k], k == size - 1 ? "\n" : ", ");
				}
			}
		}
	}
}
