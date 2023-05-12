/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:48:51 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 18:28:10 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*free_upto(char *str);
char	*set_current_line(char *str);
char	*get_current_line(char *buf, int fd);

#endif