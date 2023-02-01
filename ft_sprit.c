/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:44 by ataira            #+#    #+#             */
/*   Updated: 2023/02/01 18:54:06 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char const *s, char c, int **lensandindxs)
{
	int	i;
	int	len;
	int	cnt;

	i = 0;
	len = 0;
	cnt = 0;
	while ((size_t)i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
			len++;
		else if (len != 0)
		{
			(*lensandindxs)[cnt] = len + 1;
			(*lensandindxs)[cnt + ft_strlen(s)] = i - len;
			cnt++;
			len = 0;
		}
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		cnt;
	int		*lensandindxs;
	char	**str;

	if (s == NULL)
		return (NULL);
	lensandindxs = ft_calloc(2 * ft_strlen(s) + 1, sizeof(int));
	if (lensandindxs == NULL)
		return (NULL);
	cnt = get_size(s, c, &lensandindxs);
	str = ft_calloc(cnt + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < cnt)
	{
		str[i] = ft_calloc(lensandindxs[i], sizeof(char));
		if (str[i] == NULL)
			return (NULL);
		ft_strlcpy(str[i], s + lensandindxs[i + ft_strlen(s)], lensandindxs[i]);
		i++;
	}
	free(lensandindxs);
	return (str);
}

// int	main(void)
// {
// 	size_t	i;
// 	char	**str;

// 	i = 0;
// 	str = ft_split("a,b,c,,", ',');
// 	while (str[i] != NULL)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }
