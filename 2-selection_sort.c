#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorting array
 * @array : array to sort
 * @size : the size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, m;
int aux;

for (i = 0; i < size - 1; i++)
{
m = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[m])
m = j;
if (m != i)
{
aux = array[m];
array[m] = array[i];
array[i] = aux;
print_array(array, size);
}}
}
