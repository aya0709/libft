/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:26:37 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 22:35:36 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		*lst = (*lst)->next;
		ft_lstclear(lst, del);
		free(lst);
		ft_lstdelone(*lst, del);
	}
	return ;
}
