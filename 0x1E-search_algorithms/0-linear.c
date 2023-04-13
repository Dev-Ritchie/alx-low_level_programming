#include "search_algos.h"

/**
 * linear_search - search linearly
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);

    i = 0;
    while (i < size)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-1);
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(int);
    int value = 3;
    int index = linear_search(arr, size, value);

    if (index == -1)
        printf("%d not found in the array\n", value);
    else
        printf("%d found at index %d in the array\n", value, index);

    return 0;
}
