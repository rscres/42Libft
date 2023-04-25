/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:21:27 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 20:12:26 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*buffer;
	size_t				i;

	buffer = str;
	i = 0;
	while (i < n && buffer[i])
	{
		if (buffer[i] == (char)c)
			return ((void *)str);
		i++;
		buffer++;
	}
	return (NULL);
}
