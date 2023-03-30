#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putstr(char *str)
{
	char chr;
	
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		chr = str[i];
		ft_putchar(chr);
		i++;
	}
}

int main()
{
	char *c;
	c ="Hello";
	ft_putstr(c);
}
