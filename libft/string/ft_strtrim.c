/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:26:14 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:07:15 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
** @brief Allocates (with malloc(3)) and returns a copy of
**	’s1’ with the characters specified in ’set’ removed
**	from the beginning and the end of the string
** @param s1 The string to be trimmed 
** @param set The reference set of characters to trim
** @return The trimmed string or NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	if (j < i)
		return (ft_strdup(""));
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
