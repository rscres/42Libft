#include <stdio.h>
#include <string.h>

int main()
{
	char const	*str = "qwerty";
	char const	*str2 = "qwertyyu";

	printf ("1: %d\n", ft_strnequ(str, str2, strlen(str)));
	printf ("2: %d\n", ft_strnequ(str, str2, 5));

	char const	*str3 = "qwerasd";
	
	printf ("3: %d\n", ft_strnequ(str, str3, strlen(str)));
}