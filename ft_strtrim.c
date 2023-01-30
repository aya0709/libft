/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:39:16 by ataira            #+#    #+#             */
/*   Updated: 2023/01/26 22:39:16 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	st;
	char	*str;

	i = 0;
	st = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0' && set[0] == '\0')
		return ((char *)s1);
	if (set[0] == '\0')
		return ((char *)s1);
	while (ft_strchr(set, (int)s1[i]) != NULL && i < ft_strlen(s1))
		i++;
	st = i;
	if (i == ft_strlen(s1))
		return (NULL);
	i = ft_strlen(s1);
	while (ft_strrchr(set, (int)s1[i]) != NULL)
		i--;
	str = ft_substr(s1, st, i - st + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strtrim("  abac   ", "a cb");
// 	printf("%s", str);
// 	return (0);
// }
