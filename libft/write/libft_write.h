/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_write.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:29:03 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:31:25 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WRITE_H

# define LIBFT_WRITE_H
# include "../libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif LIBFT_WRITE_H /* LIBFT_WRITE_H */