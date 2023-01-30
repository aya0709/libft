/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:40:56 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 01:08:05 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isnegative(char c)
{
	int	index;

	index = 0;
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	res;
	int	sign;

	index = 0;
	res = 0;
	sign = 1;
	while (str[index] == ' ')
		index++;
	if (isnegative(str[index]) != 0)
	{
		if (isnegative(str[index]) == -1)
			sign = -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		res *= 10;
		if (sign == -1)
			res -= (str[index] - '0');
		else
			res += (str[index] - '0');
		index++;
	}
	return (res);
}

// int	main(void)
// {
//printf("%d=%d\n", atoi("+1"), ft_atoi("+1"));
// printf("%d=%d\n", atoi("9223372036854775808"),
		// ft_atoi("9223372036854775808"));
// printf("%d=%d\n", atoi("-9223372036854775809"),
		// ft_atoi("-9223372036854775809"));
// printf("%d=%d\n", atoi("18446744073709551616"),
		// ft_atoi("18446744073709551616"));
// printf("%d=%d\n", atoi("18446744073709551616"),
		// ft_atoi("18446744073709551616"));

// 	return (0);
// }
