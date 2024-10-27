/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:26:20 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/11/17 15:33:28 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int c, int *len)
{
	if (c >= 10)
	{
		ft_unsigned_int(c / 10, len);
	}
	ft_putcharacter_len(c % 10 + '0', len);
}
