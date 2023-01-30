/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 06:23:01 by ataira            #+#    #+#             */
/*   Updated: 2023/01/20 13:49:59 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)buf)[i] == (char)ch)
		{
			return (&((char *)buf)[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_memchr("abc\0dea", 'd', 100));
// 	return (0);
// }
