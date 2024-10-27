/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:20:23 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/11/03 10:32:35 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_integer(int number, int *len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putcharacter_len('-', len);
		number *= -1;
		ft_integer(number, len);
	}
	else
	{
		if (number > 9)
			ft_integer(number / 10, len);
		ft_putcharacter_len(number % 10 + '0', len);
	}
}
