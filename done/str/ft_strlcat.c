/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:21:23 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 20:12:04 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int	i;
	int	offset;
	int	src_len;

	offset = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if ((int)size <= offset)
		src_len += size;
	else
		src_len += offset;
	while (*(src + i) != '\0' && (offset + 1) < (int)size)
		*(dest + offset++) = *(src + i++);
	*(dest + offset) = '\0';
	return (src_len);
}
