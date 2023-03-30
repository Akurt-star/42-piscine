/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurt <a.kurt2020@gtu.edu.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:56:35 by akurt             #+#    #+#             */
/*   Updated: 2023/03/30 15:15:10 by akurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_multichar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	yuzler;
	char	onlar;
	char	birler;

	yuzler = '0';
	while (yuzler <= '9')
	{
		onlar = yuzler + 1;
		while (onlar <= '9')
		{
			birler = onlar + 1;
			while (birler <= '9')
			{
				ft_multichar(yuzler, onlar, birler);
				if (yuzler != '7' || onlar != '8' || birler != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				birler ++;
			}
			onlar++;
		}
		yuzler++;
	}
}
