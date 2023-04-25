/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:01:21 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 18:20:04 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		if ((str[i] == to_find[0]) && ft_strcmp(&str[i], to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}
