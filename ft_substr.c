/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:49:27 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/27 11:58:48 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = (size_t)start;
	j = 0;
	while (j < len)
	{
		*(dest + j) = *(s + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
