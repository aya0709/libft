/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:00:42 by ataira            #+#    #+#             */
/*   Updated: 2023/01/15 03:55:37 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i != size)
	{
		*((char *)s + i) = (char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "abcdef";
// 	printf("%s", ft_memset(str, 'p', 2));
// 	return (0);
// }
