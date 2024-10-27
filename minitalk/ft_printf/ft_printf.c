/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:50:08 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/12/04 16:08:40 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_which(char c, va_list *args, int *len, int *i)
{
	if (c == 'c')
		ft_putcharacter_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_string(va_arg(*args, char *), len);
	else if (c == 'i' || c == 'd')
		ft_integer(va_arg(*args, int), len);
	else if (c == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (c == 'p')
		ft_pointer_adress(va_arg(*args, size_t), len);
	else if (c == '%')
		ft_putcharacter_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			while (string[i] == 32)
				i++;
			ft_printf_which(string[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putcharacter_len((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
