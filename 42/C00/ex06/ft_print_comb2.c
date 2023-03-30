/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurt <a.kurt2020@gtu.edu.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:00:52 by akurt             #+#    #+#             */
/*   Updated: 2023/03/28 17:00:53 by akurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	sayi1;
	int	sayi2;

	sayi1 = 0;
	while (sayi1 < 100)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 < 100)
		{
			ft_putchar(sayi1 / 10 + '0');
			ft_putchar(sayi1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sayi2 / 10 + '0');
			ft_putchar(sayi2 % 10 + '0');
			if ((sayi1 / 10 != 9) || (sayi1 % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			sayi2++;
		}
		sayi1++;
	}
}
