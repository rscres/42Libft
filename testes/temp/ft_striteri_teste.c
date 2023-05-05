#include<unistd.h>
#include<stdio.h>

void	print_char_index(unsigned int i, char *c)
{
	printf("Character at index %d is '%c'\n", i, *c);
}

int main()
{
	char str[] = "Hello, world!";
	ft_striteri(str, print_char_index);
	return 0;
}