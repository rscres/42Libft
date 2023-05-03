/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:29:21 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/03 17:32:29 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}
