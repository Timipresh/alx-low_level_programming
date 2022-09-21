/**
 *_strcat - contenates strings
 *@dest : string variable
 *@src: string variable
 *Description: concatenates two strings
 *Return: returns a char
 */

char *_strcat(char *dest, char *src)
{	     
       	dest = strcat(dest, src);
	return (dest);		       
}
