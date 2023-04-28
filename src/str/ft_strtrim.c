/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:50:46 by renato            #+#    #+#             */
/*   Updated: 2023/04/28 00:23:00 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	int		i;
	char	*trim;

	len = ft_strlen(s);
	start = 0;
	i = 0;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;

	trim = malloc((len - start) * sizeof(char));
	while (start < len - 1)
		trim[i++] = s[start++];
	trim[i] = '\0';
	return (trim);
}
