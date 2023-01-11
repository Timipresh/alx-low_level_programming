/**
 * _strncat - concatenates two strings
 * @dest: string variable
 * @src: string variable
 * Description: concatenates two strings
 * Return: returns a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	   dest = strncat(dest, src, n);
	   return(dest);
}
