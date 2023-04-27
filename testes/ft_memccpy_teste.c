#include <stdio.h>
#include <string.h>

int main()
{
	const char	*str = "Hello world!";
	char		dest[20];
	char		dest2[20];

	printf ("%s\n", (char *)ft_memccpy(dest, str, 'o', strlen(str)));
	printf ("%s\n", (char *)ft_memccpy(dest2, str, 'a', strlen(str)));
}
