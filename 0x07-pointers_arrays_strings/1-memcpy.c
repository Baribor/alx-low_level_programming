/**
 * _memcpy - copy memory area
 * @dest: The memory area to copy to.
 * @src: The memory area to copy from.
 * @n: Number of bytes to copy.
 * Description: copies  n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
