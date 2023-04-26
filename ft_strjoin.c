/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:49:46 by renato            #+#    #+#             */
/*   Updated: 2023/04/26 19:53:08 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc((len1 + len2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i++ < len1)
		*(str + i - 1) = *(s1 + i - 1);
	i = 0;
	while (i++ < len2)
		*(str + len1 + i - 1) = *(s2 + i - 1);
	*(str + len1 + i) = '\0';
	return (str);
}
