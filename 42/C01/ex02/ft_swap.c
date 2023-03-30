#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int keep;
	keep = *a;
	*a = *b;
	*b = keep;
}

int main()
{
	int sayi;
	int sayi2;
	sayi = 14;
	sayi2 = 22;
	printf("sayi1 = %d sayi2 = %d\n", sayi, sayi2);
	ft_swap(&sayi,&sayi2);
	printf("sayi1 = %d sayi2 = %d", sayi, sayi2);

}
