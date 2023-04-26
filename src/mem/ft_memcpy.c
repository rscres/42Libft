/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:16:09 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/26 14:17:04 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buf_dest;
	const char	*buf_src;

	i = 0;
	buf_dest = dest;
	buf_src = src;
	while (i < n && buf_src != NULL)
	{
		*(buf_dest + i) = *(buf_src + i);
		i++;
	}
	*(buf_dest + i) = '\0';
	return (dest);
}
