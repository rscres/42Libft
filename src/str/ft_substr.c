/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:49:27 by renato            #+#    #+#             */
/*   Updated: 2023/04/26 18:42:40 by renato           ###   ########.fr       */
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
	return (dest);
}
