/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:33:42 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/05 17:36:31 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *ptr, int c, size_t num)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = ptr;
	while (i < num)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	buffer[i] = '\0';
	return (ptr);
}
