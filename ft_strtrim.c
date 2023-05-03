/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:50:46 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/03 20:19:48 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	if (!ft_isascii(c))
		return ((char *)str);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	char	*trim;

	end = s1 + ft_strlen(s1);
	trim = NULL;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
	}
	while (end != s1)
	{
		if (!ft_strchr(set, *end))
			break ;
		end--;
	}
	printf("%d %s\n", end, s1);
	return ((char *)set);
}

int main()
{
	char *s = "ababHelloba";
	char *set = "ab";

	ft_strtrim(s, set);	
}