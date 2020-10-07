#include "holberton.h"
*/**
  *_strlen_recursion - takes length of string recursively
  *@s: string to take length of
  * Return: str length
  */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(++s) + 1);
	return (0);
}
