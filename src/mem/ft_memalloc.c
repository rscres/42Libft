/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:05:46 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/27 14:23:13 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	alloc = malloc((size + 1) * sizeof(int));
	if (alloc != NULL)
		ft_bzero(alloc, sizeof(alloc));
	return (alloc);
}
