/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:09:53 by cwenz             #+#    #+#             */
/*   Updated: 2023/05/12 14:22:32 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_linked_lists.h"

/**
** @brief Iterates the list ’lst’ and applies the function ’f’ on 
**	the content of each node.
** @param lst The address to the node
** @param f The address to the function
** @return None
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
