/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:44 by ataira            #+#    #+#             */
/*   Updated: 2023/01/30 20:30:33 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char const *s, char c, int **lens, int **indxs)
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
			(*lens)[cnt] = len + 1;
			(*indxs)[cnt] = i - len;
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
	int		*lens;
	int		*indxs;
	char	**str;

	if (s == NULL)
		return (NULL);
	lens = ft_calloc(ft_strlen(s)+1, sizeof(int));
	indxs = ft_calloc(ft_strlen(s)+1, sizeof(int));
	cnt = get_size(s, c, &lens, &indxs);
	if (cnt == -1)
		return (NULL);
	str = ft_calloc(cnt + 1, sizeof(char *));
	i = 0;
	while (i < cnt)
	{
		str[i] = ft_calloc(lens[i], sizeof(char));
		ft_strlcpy(str[i], s + indxs[i], lens[i]);
		i++;
	}
	free(lens);
	free(indxs);
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
// 	return (0);
// }
