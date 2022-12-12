#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length.
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s++)
                len++;

        return (len);
}
