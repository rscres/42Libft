#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	str[] = "Hello world!";
	char	dest1[20];
	char	dest2[20];
	char	*dest3;
	char	*dest4;

	ft_memmove(dest1, str, 13);
	memmove(dest2, str, 13);

	printf("ft: %s\nstd: %s\n", dest1, dest2);

	dest3 = malloc(strlen(str) * sizeof(char));
	dest4 = malloc(strlen(str) * sizeof(char));

	ft_memmove(dest3, str, 13);
	memmove(dest4, str, 13);

	printf("ft: %s\nstd: %s\n", dest3, dest4);
}
