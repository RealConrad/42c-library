/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:50:15 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:06:05 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
** @brief Applies the function ’f’ to each character of the
**	string ’s’, and passing its index as first argument
**	to create a new string (with malloc(3)) resulting
**	from successive applications of ’f’
** @param s The string on which to iterate
** @param f The function to apply each character
** @return The string from successive applications of 'f' 
**	or NULL if allocation fails
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		length;
	char	*p;

	if (!s || !f)
		return (NULL);
	i = 0;
	length = ft_strlen((char *)s);
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (!p)
		return (NULL);
	while (i < length)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
