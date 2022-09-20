/**
 * swap_int - Swaps pointer values
 *
 * @a: pointer variable
 * @b: pointer variable
 * Description: function that swaps pointers
 */
void swap_int(int *a, int *b)
{
	int tmp, tmp1;

	tmp = *a;
	tmp1 = *b;
	*a = tmp1;
	*b = tmp;
}
