/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:11:10 by renato            #+#    #+#             */
/*   Updated: 2023/04/27 21:13:06 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*newstr;
	unsigned int		i;

	i = 0;
	newstr = malloc(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return (newstr);
}
