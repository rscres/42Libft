#include<stdlib.h>
#include<stdio.h>

int main()
{
	char str[] = "Here be dragons";
	
	printf("The string is: %s\n", str);
	printf("And the substring is: %s\n", ft_substr(str, 8, 6));

	char str2[] = "Hic sunt draconis";
	
	printf("The string is: %s\n", str2);
	printf("And the substring is: %s\n", ft_substr(str2, 8, 0));
}
