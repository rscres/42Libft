/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:43:54 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/27 11:52:50 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = strlen((char *)str);
	while (i > 0)
	{
		if (*(str + i - 1) == c)
			return ((char *)(str + i - 1));
		i--;
	}
	return (NULL);
}
