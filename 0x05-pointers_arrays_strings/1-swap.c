/**                                                                                                                                     
 * swap_int - swap values of integers
 * @a: a is a pointer variable
 * @b: b is a pointer variable
 * Description: swapping pointer values
 */ 

void swap_int(int *a, int *b)
{
	int tmp, tmp1;
	tmp = *a;
	tmp1 = *b;
	*a = tmp1;
	*b = tmp;
}
