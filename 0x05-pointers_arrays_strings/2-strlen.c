/**
 * _strlen - returns the length of a string
 *@s: string
 * Return: length - the string s's length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
