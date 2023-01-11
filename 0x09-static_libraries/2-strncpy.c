/**
 * _strncpy - copies strings
 * @dest: string variable
 * @src: string variable
 * Description: function that copies strings
 * Return : returns a copied string
 */

#include<string.h>

char *_strncpy(char *dest, char *src, int n)
{
	dest = strcpy(dest, src);
	return (dest);
}
