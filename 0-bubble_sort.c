#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array : pointer to array
 * @size : the size of the array
 */
void bubble_sort(int *array, size_t size)
{
int aux;
size_t i, j;

if (array == NULL || size < 2)
{
return;
}
for (j = 0; j < size - 1; j++)
for (i = 0; i < size - 1; i++)
if (array[i] > array[i + 1])
{
aux = array[i];
array[i] = array[i + 1];
array[i + 1] = aux;
print_array(array, size);
}
}
