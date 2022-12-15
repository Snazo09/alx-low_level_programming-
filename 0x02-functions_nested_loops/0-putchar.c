#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 *Description: A program that prints _putchar and new line
 *
 * Return: returns 0
 **/
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;
	
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
