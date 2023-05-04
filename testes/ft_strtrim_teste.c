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

int main(void)
{
    // Test 1: Trim whitespace from beginning and end
    char str1[] = "  hello, world!  ";
    printf("Before trim: '%s'\n", str1);
    printf("After trim: '%s'\n\n", ft_strtrim(str1, " \t\n\r"));

    // Test 2: Trim specified characters from beginning and end
    char str2[] = "***hello, world!***";
    printf("Before trim: '%s'\n", str2);
    printf("After trim: '%s'\n\n", ft_strtrim(str2, "*"));

    // Test 3: String is all whitespace
    char str3[] = "   \t\n\r   ";
    printf("Before trim: '%s'\n", str3);
    printf("After trim: '%s'\n\n", ft_strtrim(str3, " \t\n\r"));

    // Test 4: String is all characters to trim
    char str4[] = "*****";
    printf("Before trim: '%s'\n", str4);
    printf("After trim: '%s'\n\n", ft_strtrim(str4, "*"));

    return 0;
}
