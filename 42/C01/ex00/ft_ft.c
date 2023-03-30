#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int x = 12312;
	printf("x = %d", x);
	ft_ft(&x);
	printf("x = %d", x);
}
