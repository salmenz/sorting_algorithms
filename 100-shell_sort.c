#include "sort.h"

/**
 * shell_sort - Shell sort an array using Knuth sequence
 * @array: Array to sort
 * @size: Size of array to sort
 */
void shell_sort(int *array, size_t size)
{
unsigned int i, j, range = 1;
int aux = 0;

if (!array || size < 2)
return;
while (range * 3 + 1 < size)
range = range * 3 + 1;
while (range > 0)
{
for (i = range; i < size; i++)
for (j = i; j > range - 1; j -= range)
if (array[j - range] >= array[j])
{
aux = array[j];
array[j] = array[j - range];
array[j - range] = aux;
}
range = (range - 1) / 3;
print_array(array, size);
}
}
