#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

int main()
{
	char const	*str = "  Here be dragons  ";

	printf("1: %s\n", ft_strtrim(str));

	char const *str2 = "Hello World   ";

	printf("1: %s\n", ft_strtrim(str2));

	char const *str3 = "Hello, there";

	printf("1: %s\n", ft_strtrim(str3));
}
