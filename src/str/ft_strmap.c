/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:58:41 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/19 14:48:31 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i++;
	}
	return (newstr);
}
