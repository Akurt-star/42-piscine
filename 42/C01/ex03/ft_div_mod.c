#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int x;
	int y;
	int z;
	int t;

	x= 31;
	y = 11;
	printf("sayi = %d %d ", x, y);
	ft_div_mod(x,y,&z,&t);
	printf("sayi = %d %d ", z, t);
}
