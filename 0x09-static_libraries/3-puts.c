/*
 * File: 3-puts.c
 * Author: Christopher Christian Nnamdi
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str:  parameter
 *
 * @str:  parameter
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
