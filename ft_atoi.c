/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:42:42 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/02 21:01:33 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	minus;

	x = 0;
	minus = 1;
	while (*str)
	{
		if (*str == '-')
		{
			if (!(ft_isdigit(*(str + 1))))
				return (0);
			minus = -1;
		}
		if (ft_isdigit(*str))
		{
			x = x * 10 + (*str - '0');
			if (!(ft_isdigit(*(str + 1))))
				break ;
		}
		str++;
	}
	if (minus == -1)
		x *= -1;
	return (x);
}
