#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (2048);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	minus;

	x = 0;
	minus = 1;
	while (*str)
	{
		if (*str != '-' && *str != ' ' && !(ft_isdigit(*str)))
			return (0);
		if (*str == '-')
		{
			if (!(ft_isdigit(*(str + 1))))
				return (0);
			minus = -1;
		}
		if (ft_isdigit(*str))
		{
			x = x * 10 + (*str - '0');
			if (!(ft_isdigit(*(str + 1))))
				break ;
		}
		str++;
	}
	if (minus == -1)
		x *= -1;
	return (x);
}

int main()
{
    printf("%d\n", atoi("+-42"));
    printf("%d\n", ft_atoi("+-42"));
}