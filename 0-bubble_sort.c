#include "sort.h"
/**
 * bubble_sort - Function
 * Description: that function implements the bubble sort as seen
 * @array: the array of integers to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
int tmp = 0;
size_t i = 0;
size_t j = size;
while (j > 0)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i + 1];
array[i + 1] = array [i];
array[i] = tmp;
}
print_array (array, size);
}
j--;
}
}
