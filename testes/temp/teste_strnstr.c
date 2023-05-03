#include <stdio.h>

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	if (*to_find == '\0')
		return (temp);
	while (str[i] != '\0' && i < len)
	{
		if ((str[i] == to_find[0]) && ft_strcmp(&str[i], to_find))
		{
			return (&temp[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char * empty = (char*)"";
    /* 1 */ printf("1:%s\n", ft_strnstr(haystack, needle, 0));
    /* 2 */ printf("2:%s\n", ft_strnstr(haystack, needle, -1));
    /* 3 */ printf("3:%s\n", ft_strnstr(haystack, "a", -1));
    /* 4 */ printf("4:%s\n", ft_strnstr(haystack, "c", -1));
    /* 5 */ printf("5:%s\n", ft_strnstr(empty, "", -1));
    /* 6 */ printf("6:%s\n", ft_strnstr(empty, "", 0));
    /* 7 */ printf("7:%s\n", ft_strnstr(empty, "coucou", -1));
    /* 8 */ printf("8:%s\n", ft_strnstr(haystack, "aaabc", 5));
    /* 9 */ printf("9:%s\n", ft_strnstr(empty, "12345", 5));
    /* 10 */ printf("10:%s\n", ft_strnstr(haystack, "abcd", 9));
    /* 11 */ printf("11:%s\n", ft_strnstr(haystack, "cd", 8));
    /* 12 mbueno-g */ printf("12:%s\n", ft_strnstr(haystack, "a", 1));
    /* 13 opsec-infosec */ printf("13:%s\n", ft_strnstr("1", "a", 1));
    /* 14 opsec-infosec */ printf("1:%s\n", ft_strnstr("22", "b", 2));
    write(1, "\n", 1);
    return (0);
}