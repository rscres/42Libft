/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:26:44 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/27 12:34:25 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	int		i;

	newstr = malloc((size + 1) * sizeof(char));
	i = 0;
	while (i <= size)
		newstr[i++] = '\0';
	return (newstr);
}
