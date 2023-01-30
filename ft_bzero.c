/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:28:01 by ataira            #+#    #+#             */
/*   Updated: 2023/01/15 03:54:56 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		*((char *)b + i) = '\0';
		i++;
	}
	return ;
}

// int	main(void)
// {
// 	char    str[] = "abcd";
// 	ft_bzero(str, 0);
// 	printf("%s", str);
// 	return (0);
// }
