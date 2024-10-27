/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:45:02 by sevdeemil         #+#    #+#             */
/*   Updated: 2023/11/03 16:05:03 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

void	ft_putcharacter_len(char c, int *len);
void	ft_string(char *args, int *len);
void	ft_integer(int number, int *len);
void	ft_unsigned_int(unsigned int c, int *len);
void	ft_hexadecimal(unsigned int c, int *len, char x_or_X);
void	ft_pointer_adress(size_t pointer, int *len);
int		ft_printf(const char *string, ...);

#endif
