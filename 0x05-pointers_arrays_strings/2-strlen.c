/**
 * _strlen - returns the length of a string
 * @s: arrays of characters or string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; *(s[i]) != '\0'; i++)
		length++;
	return (length);
}
