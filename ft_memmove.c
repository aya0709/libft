/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:44:10 by ataira            #+#    #+#             */
/*   Updated: 2023/01/15 03:55:08 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest <= src)
	{
		while (i != n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	if (dest > src)
	{
		while (i != n)
		{
			*(char *)(dest + n - i - 1) = *(char *)(src + n - i - 1);
			i++;
		}
	}
	return (dest);
}

// #include <string.h>
// int	main(void)
// {
// 	char	dst_str[]  = "abcdefghijklmn";

// 	ft_memmove(dst_str+3, dst_str, 7);
//     //memmove(dst_str+7, dst_str, 10);
// 	printf("%s", dst_str);
// 	return (0);
// }
