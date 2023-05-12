/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:58:35 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 10:59:00 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

static void	free_mem(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static char	*substr_len(const char **str, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[i] && (*str)[i] != c)
		i++;
	dest = ft_substr(*str, 0, i);
	if (!dest)
		return (NULL);
	*str += i;
	return (dest);
}

static int	count_substr(char *str, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] != c && flag == 1)
		{
			count++;
			flag = -1;
		}
		else if (str[i] == c && flag == -1)
			flag = 1;
		i++;
	}
	return (count);
}

/**
** @brief Splits the string 's' into substrings by the delimiter 'c'
** @param s The string to be split 
** @param c The delimiter to split the string
** @return A pointer to the newly created splitted strings
*/
char	**ft_split(char const *s, char c)
{
	char	**split_str;
	int		num_substr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	num_substr = count_substr((char *)s, c);
	split_str = (char **)ft_calloc((num_substr + 1), sizeof(char *));
	if (!split_str)
		return (NULL);
	while (i < num_substr)
	{
		split_str[i] = substr_len(&s, c);
		if (!split_str[i])
		{
			free_mem(split_str, i - 1);
			return (NULL);
		}
		i++;
	}
	split_str[i] = NULL;
	return (split_str);
}
