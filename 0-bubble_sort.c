#include "sort.h"
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i])
			++i;
	}
	printf("\n");
}

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
