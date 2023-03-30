#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main()
{
	int x = 21;
	int y = 4;

	printf("x= %d\n y=%d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("x= %d\n y=%d\n", x, y);
}
