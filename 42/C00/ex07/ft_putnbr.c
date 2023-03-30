/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurt <a.kurt2020@gtu.edu.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:37:02 by akurt             #+#    #+#             */
/*   Updated: 2023/03/29 09:37:03 by akurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	sayi;

	sayi = nb;
	if (sayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (sayi < 0)
	{
		ft_putchar('-');
		sayi = (-1) * sayi;
	}
	if (sayi > 9)
	{
		ft_putnbr(sayi / 10);
		ft_putnbr(sayi % 10);
	}
	else
		ft_putchar(sayi + 48);
}
