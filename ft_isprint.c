/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 06:19:41 by ataira            #+#    #+#             */
/*   Updated: 2023/01/11 06:40:51 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// int	main(void)
// {
// 	printf("%d", ft_isprint('NULL'));
// 	return (0);
// }
