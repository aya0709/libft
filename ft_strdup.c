/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:49:18 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 01:09:07 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_cp;
	size_t	len;

	len = ft_strlen(str);
	str_cp = (char *)ft_calloc(len, sizeof(char));
	ft_memcpy(str_cp, str, len * sizeof(char));
	return (str_cp);
}

// #include <stdio.h>
// #include <string.h>
// #include <malloc/malloc.h>
// int main(void)
// {
//    char *string = "this is a copy";
//    char *newstr;
//    char *newstr_;

// 	/* Make newstr point to a duplicate of string */
//    if ((newstr = ft_strdup(string)) != NULL)
//       printf("The new string is: %s\n", newstr);
// 	if ((newstr_ = strdup(string)) != NULL)
//       printf("The new string is: %s\n", newstr_);
// 	printf("%zu=%zu\n", malloc_size(newstr), malloc_size(newstr_));
//     free(newstr);
//     free(newstr_);
//    return (0);
// }
