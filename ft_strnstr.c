/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:01:21 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/02 21:23:53 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp(const char *s1, const char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	
	if (*to_find == '\0')
		return (temp);
	while (str[i] != '\0' && i < len)
	{
		if ((str[i] == to_find[0]) && cmp(&str[i], to_find))
			return (&temp[i]);
		i++;
	}
	return (0);
}
