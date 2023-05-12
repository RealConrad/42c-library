/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:03:59 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/24 16:50:35 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @brief Converts a string of characters representing an integer value 
** 		into an actual integer value
** @param str String to convert to int
** @return Returns the int value of the passed string
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((char)str[i] >= 48 && (char)str[i] <= 57)
	{
		number = 10 * number + ((char)str[i] - 48);
		i++;
	}
	return (number * sign);
}
