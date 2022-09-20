/**
 *swap_int - swaps the values of two integers
 *@a: Integer value for a
 *@b: Integer value fot b
 *
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
