/**
 * _strcmp - compares strings
 * @s1: string variable
 * @s2: string variable
 * Description: function that compares strings
 * Return: returns an int
 */

int _strcmp(char *s1, char *s2)
{
	int check = 0;

	while(*s1!='\0' && *s2!='\0')
	{
		if(*s1 != *s2)
		{
			check = 1;
		}
		s1++;
		s2++;
	}

	if(check == 0)
	{
		return 0;
		
	}
	else
	{
		return 1;
	}
}

