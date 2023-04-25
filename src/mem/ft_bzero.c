/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:05:24 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 18:19:59 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = s;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
	buffer[i] = '\0';
}
