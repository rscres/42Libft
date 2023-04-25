/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:53:03 by rseelaen          #+#    #+#             */
/*   Updated: 2023/04/25 17:40:16 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

// Char functions
int		ft_toupper(int a);
int		ft_tolower(int a);
int		ft_isprint(int a);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isalpha(int a);
int		ft_isalnum(int a);

// String functions
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int		ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);

// Memory functions
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t num);
void	*ft_memalloc(size_t size);
void	ft_bzero(void *s, size_t n);

// Convertion functions
int		ft_atoi(const char *str);

// Print functions
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);

#endif