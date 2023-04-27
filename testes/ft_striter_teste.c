#include<unistd.h>
#include<stdio.h>

void	to_uppercase(char *c)
{
	*c += 1;
}

int main()
{
	char str[] = "Hello, world!";
	ft_striter(str, to_uppercase);
	printf("%s\n", str);
	return 0;
}
