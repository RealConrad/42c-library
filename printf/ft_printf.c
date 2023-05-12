/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:52:32 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/27 16:09:00 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;

	printed_chars = 0;
	if (!format)
		return (0);
	va_start(args, format);
	printed_chars = ft_calc_length(args, format, printed_chars);
	va_end(args);
	return (printed_chars);
}

int	ft_calc_length(va_list args, const char *format, int length)
{
	int	write_check;
	int	i;

	write_check = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			break ;
		if (format[i] == '%')
		{
			write_check = ft_format_specifiers(format[++i], args);
			if (write_check < 0)
				return (-1);
			length += write_check;
		}
		else
		{
			if (ft_putchar(format[i]) < 0)
				return (-1);
			length++;
		}
		i++;
	}
	return (length);
}
