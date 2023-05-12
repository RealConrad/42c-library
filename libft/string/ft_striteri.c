/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:06:06 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:00:55 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"
/**
** @brief Applies the function ’f’ on each character of
**	the string passed as argument, passing its index
**	as first argument. Each character is passed by
**	address to ’f’ to be modified if necessary
** @param s The string on which to iterate.
** @param f The function to apply to each character.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		f(i, &s[i]);
		i++;
	}
}
