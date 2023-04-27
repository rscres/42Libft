/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:29:21 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/27 11:58:46 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*alloc;

	alloc = malloc(nitems * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, sizeof(alloc));
	return (alloc);
}
