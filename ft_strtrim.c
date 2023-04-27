/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:14:42 by renato            #+#    #+#             */
/*   Updated: 2023/04/26 22:35:23 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		j;
	char	*trim;

	start = 0;
	i = 0;
	while (s1[i] == set[i])
		i++;
	start = i;
	while (*(s1 + i) || *set)
	{
		if (*s1 != *set)
			i++;
	}
	printf("%d\n", start);
	return ((trim + start));
}

int main()
{
	const char	str[] = "abc1hello thereabc1";
	const char	find[] = "abc1";

	printf("%s\n", ft_strtrim(str, find));
}
