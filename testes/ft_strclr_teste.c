#include <stdio.h>
#include <string.h>

int main() {
  char *str = strdup("Hello, world!");
  printf("Before ft_strdel: str = %s\n", str);
  ft_strclr(str);
  printf("After ft_strdel: str = %s\n", str);
  return 0;
}