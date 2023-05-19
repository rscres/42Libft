/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:21:23 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/19 14:46:17 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*buf_dest;
	const char	*buf_src;

	i = 0;
	buf_dest = dest;
	buf_src = src;
	while (i < n && *(buf_src + i) != c)
	{
		*(buf_dest + i) = *(buf_src + i);
		i++;
	}
	*(buf_dest + i) = '\0';
	return (dest);
}
