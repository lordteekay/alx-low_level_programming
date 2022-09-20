/**
 * _strlen - returns the length of a string
 * @s: arrays of characters or string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
