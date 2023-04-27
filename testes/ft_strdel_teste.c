#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
  char *str = strdup("Hello, world!");
  printf("Before ft_strdel: str = %s\n", str);
  ft_strdel(&str);
  printf("After ft_strdel: str = %s\n", str);
  return 0;
}
