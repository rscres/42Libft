/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:05:34 by renato            #+#    #+#             */
/*   Updated: 2023/05/01 12:24:39 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{	
	int	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		minus;

	minus = 0;
	if (n < 0)
	{
		len = ft_intlen(n) + 1;
		minus = -1;
	}
	else
		len = ft_intlen(n);
	str = malloc((len + 1) * sizeof(char));
	while (len-- > 0)
	{
		if (n % 10 < 0)
			str[len] = -(n % 10) + '0';
		else
			str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (minus < 0)
		str[0] = '-';
	return (str);
}
