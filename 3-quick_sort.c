#include "sort.h"
/**
 * swap_val - function that swap values of array
 * @val1 : first value
 * @val2 : second value
 * Return : nothing
 */
void swap_val(int *val1, int *val2)
{


	int tempo = *val1;
	*val1 = *val2;
	*val2 = tempo;
}
/**
 * quick_sort - run the func quick
 * @array : array to be sorted
 * @size : size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick(array, 0, size - 1, size);
}
/**
 * quick - recursion func
 * @array : array needed for sorting
 * @low : first index
 * @high : last index
 * @size : size
 */
void quick(int *array, size_t  low, size_t high, size_t size)
{
	size_t pivot_idx;

	if (high == 0)
		return;

	if (high <= low)
		return;

	pivot_idx = partition(array, low, high, size);
	if (pivot_idx != 0 && pivot_idx > low)
		quick(array, low, pivot_idx - 1, size);
	if (pivot_idx < size - 1)
		quick(array, pivot_idx + 1, high, size);
}
/**
 * partition - make the initial sort
 * @array : array for sorting
 * @low : first index
 * @high : last index
 * @size : size
 * Return : id
 */
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t  i;


	for (i = low; i < high; i++)
	{
		if (array[high] > array[i])
		{
			if (i != low)
			{
				swap_val(&array[i], &array[low]);
				print_array(array, size);
			}

			low++;
		}
	}

	if (array[high] < array[low])
	{
		swap_val(&array[high], &array[low]);
		high = low;
		print_array(array, size);
	}

	return (high);
}
