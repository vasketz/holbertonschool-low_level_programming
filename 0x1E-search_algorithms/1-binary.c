#include "search_algos.h"
/**
* binary_search - binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value to compare
* Return: index at value
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int max = size - 1;
	unsigned int min = 0;
	unsigned int mid;
	unsigned int i;

	if (array == NULL)
		return (-1);
	while (max >= min)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (max + min) / 2;
		if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
