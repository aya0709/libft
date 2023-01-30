/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:07:54 by ataira            #+#    #+#             */
/*   Updated: 2023/01/15 03:55:20 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		*((char *)(dst + i)) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char dst[] = "abcde";
// 	char src[] = "pqr";
// 	printf("%s", ft_memcpy(dst, src, 0));
// 	return (0);
// }
