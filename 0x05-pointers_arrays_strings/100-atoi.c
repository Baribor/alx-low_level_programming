#include <stdbool.h>
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to check.
 * Return: 1 if true else 0
 */
bool _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (true);
	return (false);
}

/**
 * _issign - Checks if a character is a digit.
 *
 * @c: The character to check.
 * Return: 1 if true else 0
 */
bool _issign(int c)
{
	if (c == 43 || c == 45)
		return (true);
	return (false);
}


/**
 * _atoi - Returns the number representation fof a string
 * @s: The string
 * Return: The extracted integer
 */
int _atoi(char *s)
{
	int start = -1, end, c = 0, val = 0;
	bool nns;
	char sign;
	printf("%s", s);
	
	while (1)
	{
		if (*(s + c) == '\0')
			break;
			
		if (_isdigit(*(s + c)))
		{
			
			if (start < 0)
			{
				if (c > 0 && _issign(*(s + c - 1)))
					sign = *(s + c - 1);
				start = c;
			}
			else
				end = c;
		}
		else
		{
			if (start >= 0)
				break;
		}
		c++;
	}
	
	putchar(sign);
	printf("%d  %d  starts: %d\n", start, end, nns);
	return (val);
}
