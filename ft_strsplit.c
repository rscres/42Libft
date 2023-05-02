/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:30:14 by renato            #+#    #+#             */
/*   Updated: 2023/05/01 21:47:34 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	int			count;
	int			i;
	char		**arr;
	const char	*temp;

	temp = s;
	count = 0;
	while (temp[i])
	{
		if ((temp[i] == c || i == 0) && temp[i + 1] != c && temp[i + 1] != '\0')
		{
			while (temp[i] != c)
				i++;
			count++;
		}
		i++;
	}
	printf ("%d\n", count);
}

int main()
{
	char	str1[] = " Hic sunt Draconis ";
	char	str2[] = "*oT**be*or*not**to*be*";
	char	str3[] = "Hic sunt Draconis ";
	char	str4[] = "*oT**be*or*not**to*be";
	char	**dest1;
	char	**dest2;
	char	**dest3;
	char	**dest4;

	dest1 = ft_strsplit(str1, ' ');
	dest2 = ft_strsplit(str2, '*');
	dest3 = ft_strsplit(str3, ' ');
	dest4 = ft_strsplit(str4, '*');

}