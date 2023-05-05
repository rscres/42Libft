#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int a = 1234;
	int b = -567;

	printf("1234: %s\n", ft_itoa(a));
	printf("-567: %s\n", ft_itoa(b));
	printf("INT_MIN: %s\n", ft_itoa(INT_MIN));
	printf("INT_MAX: %s\n", ft_itoa(INT_MAX));
	printf("0: %s\n", ft_itoa(0));
}
