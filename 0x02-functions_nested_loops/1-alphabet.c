/**
 * print_alphabet - prints alphabet in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
