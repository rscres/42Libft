/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:50:46 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/02 13:58:37 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;
	int		j;
	char	*trim;

	len = ft_strlen(s1);
	start = 0;
	i = 0;
	j = ft_strlen(set);
	while (s1[len] == set[j--])
		len--;
	j = 0;
	while (s1[start] == set[j++])
		start++;
	trim = malloc((len - start + 1) * sizeof(char));
	while (start <= len)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
