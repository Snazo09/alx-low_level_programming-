#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each array elem on a newl
* @array: array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return (0);
for (i = 0; i < size; i++)
{
action(array[i]);
}
