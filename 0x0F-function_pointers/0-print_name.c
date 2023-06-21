
/**
 * print_name - Function that prints a name
 * @name: Pointer to string to print
 * @f: Pointer to a function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
