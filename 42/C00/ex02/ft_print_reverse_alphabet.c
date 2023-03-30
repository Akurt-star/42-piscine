/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurt <a.kurt2020@gtu.edu.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:47:14 by akurt             #+#    #+#             */
/*   Updated: 2023/03/28 12:06:26 by akurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	harf;

	harf = 'z';
	while (harf >= 'a')
	{
		ft_putchar(harf);
		harf--;
	}
}
