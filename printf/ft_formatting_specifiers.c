/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatting_specifiers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:35:45 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:52:53 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
** @brief Determines the specifier in the printf function
** @param c The specifier to check for
** @param args Current arg we checking for
** @return Length of the number/string
*/
int	ft_format_specifiers(int c, va_list args)
{
	int	length;

	length = 0;
	if (c == 'c')
		length = ft_putchar(va_arg(args, int));
	else if (c == 's')
		length = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		length = ft_putp(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		length = ft_putnum((long)va_arg(args, int));
	else if (c == 'u')
		length = ft_putnum((long)va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		length = ft_puthex((long)va_arg(args, unsigned int), c);
	else if (c == '%')
		length = ft_putchar('%');
	return (length);
}
