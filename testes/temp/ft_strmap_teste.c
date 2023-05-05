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

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1024);
	return (0);
}

char	to_uppercase(char c)
{
	if (ft_isalpha(c))
		c -= 32;
	return (c);
}

int main()
{
	char	*str = "Hic sunt draconis";

	printf ("%s\n", ft_strmap(str, to_uppercase));
}