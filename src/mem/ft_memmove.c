/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:29:24 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/26 13:56:27 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*temp;
	char		*buf_dest;
	const char	*buf_src;

	temp = malloc(ft_strlen(dest) * sizeof(int));
	if (temp == NULL)
		return (NULL);
	i = 0;
	buf_dest = dest;
	buf_src = src;
	while (i < n)
	{
		*(temp + i) = *(buf_src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(buf_dest + i) = *(temp + i);
		i++;
	}
	return (dest);
}
