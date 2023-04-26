/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:29:24 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/26 16:22:56 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buf_dest;
	const char	*buf_src;

	if (dest == NULL || src == NULL)
		return (NULL);
	buf_dest = (char *)dest;
	buf_src = src;
	if (dest < src)
	{
		i = 0;
		while (i++ < n)
			*(buf_dest + i - 1) = *(buf_src + i - 1);
	}
	else
	{
		i = n;
		while (i-- > 0)
			*(buf_dest + i) = *(buf_src + i);
	}
	return (dest);
}
