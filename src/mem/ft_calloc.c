/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:29:21 by rseelaen          #+#    #+#             */
/*   Updated: 2023/05/18 13:42:35 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*alloc;

// 	if (!nmemb || !size || nmemb > SIZE_MAX / size)
// 		return (NULL);
// 	alloc = malloc(nmemb * size);
// 	if (alloc == NULL)
// 		return (NULL);
// 	ft_bzero(alloc, nmemb * size);
// 	return (alloc);
// }

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = s;
	if (n == 0)
		return ;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*alloc;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size != 0 && total_size / size != nmemb)
		return (NULL);
	alloc = (void *)malloc(total_size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, total_size);
	return (alloc);
}

size_t	arraylen(int *a)
{
	size_t	len;

	len = sizeof(a) / sizeof(a[0]);
	return (len);
}

int main()
{
    //******************* CALLOC  *******************
	//******************* TESTE 1 *******************
    int        size = 0;
    int*    array = (int*) calloc(size, sizeof(int));
	
	printf("NMEMB == 0\n");
	printf("STD\n");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
	    printf("[%d]: %p, ", i, array);
	}
	free(array);
	printf("\n");

    int        sizef = 0;
    int*    arrayf = (int*) ft_calloc(sizef, sizeof(int));
	printf("FT\n");
    for (int e = 0; e < (sizeof(arrayf) / sizeof(arrayf[0])); e++)
    {
	    printf("[%d]: %p, ", e, arrayf);
	}
	free(arrayf);
	printf("\n");
	
	// ******************* TESTE 2 *******************
	size = 10;
    array = (int*) calloc(size, sizeof(int));
	printf("\nNMEMB AND SIZE NOT NULL\n");
	printf("STD\n");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
	    printf("[%d]: %p, ", i, array);
	}
	free(array);
	printf("\n");

    sizef = 10;
    arrayf = (int*) ft_calloc(sizef, sizeof(int));
	printf("FT\n");
    for (int e = 0; e < (sizeof(arrayf) / sizeof(arrayf[0])); e++)
    {
	    printf("[%d]: %p, ", e, arrayf);
	}
	free(arrayf);
	printf("\n");

	//******************* TESTE 3 *******************
	size = 10;
    array = (int*) calloc(size, 0);
	printf("\nSIZE == 0\n");
	printf("STD\n");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
	{
	    printf("[%d]: %p, ", i, array);
	}
	free(array);
	printf("\n");
	
    sizef = 10;
    arrayf = (int*) ft_calloc(sizef, 0);
	printf("FT\n");
    for (int e = 0; e < (sizeof(arrayf) / sizeof(arrayf[0])); e++)
	{
	    printf("[%d]: %p, ", e, arrayf);
	}
	free(arrayf);
	printf("\n");

	//******************* TESTE 4 *******************
	size = 1;
    array = (int*) calloc(size, __INT_MAX__);
	printf("\n__INT_MAX___\n");
	printf("STD\n");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
	{
	    printf("[%d]: %p, ", i, array);
	}
	free(array);
	printf("\n");
	
    sizef = 1;
    arrayf = (int*) ft_calloc(sizef, __INT_MAX__);
	printf("FT\n");
    for (int e = 0; e < (sizeof(arrayf) / sizeof(arrayf[0])); e++)
	{
	    printf("[%d]: %p, ", e, arrayf);
	}
	free(arrayf);
	printf("\n");

	//******************* TESTE 5 *******************
	size = 1;
    array = (int*) calloc(size, __SIZE_MAX__);
	printf("\n__SIZE_MAX___\n");
	printf("STD\n");
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
	{
	    printf("[%d]: %p, ", i, array);
	}
	free(array);
	printf("\n");
	
    sizef = 1;
    arrayf = (int*) ft_calloc(sizef, __SIZE_MAX__);
	printf("FT\n");
    for (int e = 0; e < (sizeof(arrayf) / sizeof(arrayf[0])); e++)
	{
	    printf("[%d]: %p, ", e, arrayf);
	}
	free(arrayf);
	printf("\n");
    return (0);
    return (0);

	
}