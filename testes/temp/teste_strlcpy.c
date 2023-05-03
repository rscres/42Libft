#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
    if (size == 0)
        return (strlen(src));
	if (size <= 0)
		size = 1;
	while (*(src + i) && i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	while (*(src + i))
		i++;
	return (i);
}

int main()
{
    char src[] = "coucou";
    char dest[10]; memset(dest, 'A', 10);
    /* 1 */ printf("strlcpy: %u\nlen: %lu\ndest: %c\n", ft_strlcpy(dest, src, 0), strlen(src), dest[0]);
}