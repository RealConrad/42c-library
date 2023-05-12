/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:20:39 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 11:07:28 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"
/**
** @brief Allocates memory and returns a substring
**	from string 's', The substring begins at 'start' and 
**	is max bytes of 'len'
** @param s The string to create a substring from
** @param start Starting position in 's'
** @param len Number of bytes the substring will be
** @return Returns the substring or NULL if allocation fails
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start + i] && i < len)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
#include <stdio.h>

int main()
{
	char			s[] = "Hello this is my string";
	unsigned int	start = 5;
	size_t			len = 5;
	printf("%s\n", ft_substr(s,start, len));
	return (0);
}
*/
