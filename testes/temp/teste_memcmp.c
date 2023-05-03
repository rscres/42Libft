#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t		i;
	const char	*p1;
	const char	*p2;
    int			ret;

	i = 0;
    ret = 0;
	p1 = ptr1;
	p2 = ptr2;
	while (i < num)
	{
		if (*(p1 + i) != *(p2 + i))
		{
			ret = *(p1 + i) - *(p2 + i);
			return (1);
		}
		i++;
	}
	return (0);
}

int main(void)
{
    char s[] = {-128, 0, 127, 0};
    char sCpy[] = {-128, 0, 127, 0};
    char s2[] = {0, 0, 127, 0};
    char s3[] = {0, 0, 42, 0};
    /* 1 */ printf("1: %d\n", !ft_memcmp(s, sCpy, 4));
    /* 2 */ printf("2: %d\n", !ft_memcmp(s, s2, 0));
    /* 3 */ printf("3: %i\n", ft_memcmp(s, s2, 1));
    /* 4 */ printf("4: %i\n", ft_memcmp(s2, s, 1));
    /* 5 */ printf("5: %d\n", ft_memcmp(s2, s3, 4));
    write(1, "\n", 1);
    return (0);
}
