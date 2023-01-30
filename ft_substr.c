/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:02:16 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 02:07:34 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		start = ft_strlen(s);
	printf("%zu",len);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

int	main(void)
{
	char	*str;
	char	*s;

	s = "libft-test-tokyo";
	// str = ft_substr(s, 10, 5);
	// printf("%s\n", str);
	str = ft_substr(s, 15, 0);
	printf("%s", str);
	return (0);
}
