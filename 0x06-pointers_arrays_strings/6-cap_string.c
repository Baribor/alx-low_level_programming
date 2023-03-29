int is_seperator(int c)
{
    return (c == '\t' || c == ' ' || c == '\n' || c == '.' || c == ';' || c ==
    ',' || c == '"' || c == "{");
}

/**
 * cap_string - Capitalizes a string
 * @s: pointer to the string array of characters
 * Return: Nothing
 */
char *cap_string(char *s)