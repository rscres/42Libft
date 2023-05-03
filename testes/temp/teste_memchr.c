#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char )c)
		{
            printf("in: %d\n", buffer[i]);
            return ((void *)(str + i));
        }
		i++;
	}
	return (NULL);
}

int main(void)
{

        char s[] = {0, 1, 2 ,3 ,4 ,5};
        /* 1 */ printf("%s\n", (char *)ft_memchr(s, 0, 0));
        /* 2 */ printf("%d\n", ft_memchr(s, 0, 1) == s);
        /* 3 */ printf("%d\n", ft_memchr(s, 2, 3) == s + 2);
        /* 4 */ printf("%d\n", ft_memchr(s, 6, 6) == NULL);
        /* 5 */ printf("%d\n", ft_memchr(s, 2 + 256, 3) == s + 2); //Cast check         
        write(1, "\n", 1);
        return (0);
}
