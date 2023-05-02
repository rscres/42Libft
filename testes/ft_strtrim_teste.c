#include <stdio.h>
#include <stdlib.h>

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
	char const	*str = "abcHere be Dragonsabc";
	char const	*set = "abc";

	printf("%s\n", ft_strtrim(str, set));
}
