/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:29:24 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 20:45:37 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buf_dest;
	const char	*buf_src;

	buf_dest = malloc(ft_strlen(dest) * sizeof(int));
	i = 0;
	buf_dest = dest;
	buf_src = src;
	while (i < n && buf_src != NULL)
	{
		*(buf_dest + i) = *(buf_src + i);
		i++;
	}
	*(buf_dest + i) = '\0';
	return (buf_dest);
}
