#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src,
 * including the terminating null byte, 
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; *dest != 0; i++)
dest++;

for (j = 0; src[j] != 0; j++)
{
*dest = src[j];
dest++;
}
*dest = '\0';
dest -= (i + j);
return (dest);
}
