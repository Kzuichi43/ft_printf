/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:28:36 by alexgonz          #+#    #+#             */
/*   Updated: 2026/10/07 17:20:33 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_digits(long unsigned int nbr)
{
	int	i;

	i = 1;
	while (nbr > 15)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

static void	write_hex(long unsigned int nbr, int crit)
{
	char	digits[17];

	if (crit == 1)
		ft_strlcpy(digits, "0123456789ABCDEF", 18);
	else
		ft_strlcpy(digits, "0123456789abcdef", 18);
	if (nbr >= 16)
		write_hex(nbr / 16, crit);
	write(1, &digits[nbr % 16], 1);
}

int	print_hex(unsigned int nbr, int flag)
{
	long unsigned	n;

	n = (long)nbr;
	write_hex(n, flag);
	return (hex_digits(n));
}
