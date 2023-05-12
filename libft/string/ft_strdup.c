/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:16:16 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 10:59:59 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
** @brief  Allocates sufficent memor for the copy of 's1', does the copy and
**	returns a pointer to it
** @param s1 The string to be allocated memory and copied
** @return A pointer to the copied string
*/
char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*str;
	size_t	length;

	length = ft_strlen(s1) + 1;
	copy = (char *)malloc(sizeof(char) * length);
	str = copy;
	if (!copy)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	return (copy);
}
