#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	offset;
	int	src_len;

	if (size < 0)
	{
        printf("HERE");
        return (ft_strlen(src) + ft_strlen(dest));
    }
	offset = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if ((int)size <= offset)
		src_len += size;
	else
		src_len += offset;
	while (*(src + i) != '\0' && (offset + 1) < (int)size)
		*(dest + offset++) = *(src + i++);
	*(dest + offset) = '\0';
	return (src_len);
}

int main()
{
    char dest[30]; memset(dest, 0, 30);
    char * src = (char *)"AAAAAAAAA";

    memset(dest, 'C', 5);
    /* 5 */ printf("strlcat: %lu\nstrcmp: %d\n", ft_strlcat(dest, src, -1), !strcmp(dest, "CCCCCAAAAAAAAA"));
    memset(dest, 'C', 15);
}
