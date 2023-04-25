/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:21:27 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 12:45:29 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if ((str[i] == to_find[0]) && ft_strcmp(&str[i], to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}
