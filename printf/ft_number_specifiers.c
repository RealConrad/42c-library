/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:45:12 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/27 16:00:21 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
** @brief Converts a long integer to a string and prints it
** @param num The long integer to be converted to string
** @return The number of characters printed
*/
int	ft_putnum(long num)
{
	int	length;

	length = 0;
	if (num < 0)
	{
		num *= -1;
		length = ft_putchar('-');
		if (length < 0)
			return (-1);
	}
	length += ft_print_digits(num);
	return (length);
}

int	ft_print_digits(long num)
{
	int	write_check;
	int	length;

	length = 0;
	write_check = 0;
	if (num >= 10)
	{
		length = ft_print_digits(num / 10);
		if (length < 0)
			return (-1);
	}
	write_check = ft_putchar(num % 10 + 48);
	if (write_check < 0)
		return (-1);
	length += write_check;
	return (length);
}

/**
** @brief Converts a long integer to a hexadecimal string and prints it
** @param num The long integer to be converted
** @param c Char representing the case for hexadecimal digits (x or X)
** @return The number of characters printed
*/
int	ft_puthex(size_t num, char c)
{
	int		i;
	int		length;
	char	hex_string[17];
	char	*hex;

	hex = "0123456789ABCDEF";
	if (c == 'x')
		hex = "0123456789abcdef";
	i = 0;
	length = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num != 0)
	{
		hex_string[i++] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		if (ft_putchar(hex_string[--i]) < 0) // Check if write fails
			return (-1);
		else
			length++;
	}
	return (length);
}

/**
** @brief Prints the memory address of a given pointer in hexadecimal format
** @param ptr  void pointer to print the memory address of
** @return The number of characters printed
*/
int	ft_putp(void *ptr)
{
	int	i;

	i = ft_putstr("0x");
	if (i < 0)
		return (-1);
	i += ft_puthex((size_t)ptr, 'x');
	return (i);
}
