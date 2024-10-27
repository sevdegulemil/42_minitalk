/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_adress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:31:32 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/11/03 09:54:51 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_adress(size_t pointer, int *len)
{
	char	*hex_character;
	char	hex_string[20];
	int		i;

	i = 0;
	hex_character = "0123456789abcdef";
	write(1, "0x", 2);
	(*len) += 2;
	if (pointer == 0)
	{
		ft_putcharacter_len('0', len);
		return ;
	}
	while (pointer != 0)
	{
		hex_string[i] = hex_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_putcharacter_len(hex_string[i], len);
}
