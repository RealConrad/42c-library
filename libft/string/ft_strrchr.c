/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:28:03 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:06:59 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
** @brief Locates the LAST occurance of 'c' in 's'
** @param s The string to be searched
** @param c The character to look for
** @return Returns a pointer to the located character, or NULL if
**	not found
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*return_val;

	return_val = NULL;
	ptr_s = (char *)s;
	if (*ptr_s == (char)c)
		return_val = ptr_s;
	while (*ptr_s++ != '\0')
	{
		if (*ptr_s == (char)c)
			return_val = ptr_s;
	}
	return (return_val);
}
