/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:10:27 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:20:04 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_conversion.h"

static char	*get_number(char *str, int sign, int n, int i)
{
	while (i >= 0)
	{
		str[i] = ((char)sign * (n % 10) + '0');
		i--;
		n /= 10;
	}
	return (str);
}

static int	get_i_value(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/**
** @brief Returns a string representing the integer received as an argument.
** @param n Int to convert
** @return The string representing the int or NULL if allocaiton fails
*/
char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;

	sign = 1;
	i = get_i_value(n);
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	str = get_number(str, sign, n, i);
	if (sign == -1)
		str[0] = '-';
	return (str);
}
