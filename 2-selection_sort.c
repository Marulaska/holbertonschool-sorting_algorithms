#include "sort.h"

/**
* selection_sort - function that sorts an array
* @array: array to sort
* @size: size of the array
**/

void selection_sort(int *array, size_t size)
{
	size_t index = 0;
	size_t out_index;
	int entry_index, tem_num;

	if (!array)
	return;

	while (index < size - 1)
	{
	entry_index = index;
	out_index = index + 1;

	while (out_index < size)
	{
	if (array[out_index] < array[entry_index])
	entry_index = out_index;
	out_index++
	}
	if (array[index] > array[entry_index])
	{
	tem_num = array[index];
	array[index] = array[entry_index];
	array[entry_index] = tem_num;
	print_array(array, size);
	}

	index++;
	}
}
