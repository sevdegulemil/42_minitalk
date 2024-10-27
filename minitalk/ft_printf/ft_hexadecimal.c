/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdeemil <sevdeemil@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:31:51 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/11/03 09:50:10 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(unsigned int c, int *len, char x_or_X)
{
	char	hex_string[20];
	char	*hex_character;
	int		i;

	if (x_or_X == 'x')
		hex_character = "0123456789abcdef";
	else if (x_or_X == 'X')
		hex_character = "0123456789ABCDEF";
	if (c == 0)
	{
		ft_putcharacter_len('0', len);
		return ;
	}
	i = 0;
	while (c != 0)
	{
		hex_string[i] = hex_character[c % 16];
		c = c / 16;
		i++;
	}
	while (i--)
		ft_putcharacter_len(hex_string[i], len);
}
