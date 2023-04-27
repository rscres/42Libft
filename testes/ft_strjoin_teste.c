int main()
{
	char	str1[] = "hello ";
	char	str2[] = "world!";

	printf("str1 + str2 = %s\n", ft_strjoin(str1, str2));

	char	str3[] = "hic ";
	char	str4[] = "sunt draconis";

	printf("str3 + str4 = %s\n", ft_strjoin(str3, str4));

	char	str5[] = "";
	char	str6[] = "hello there";

	printf("str3 + str4 = %s\n", ft_strjoin(str5, str6));

	char	str7[] = "";
	char	str8[] = "";

	printf("str7 + str8 = %s\n", ft_strjoin(str7, str8));
}