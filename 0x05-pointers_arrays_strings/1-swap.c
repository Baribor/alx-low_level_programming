/**
 * swap_int - Swap two integer variables.
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
