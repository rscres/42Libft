#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buf_dest;
	char	*buf_src;

	buf_dest = (char *)dest;
	buf_src = (char *)src;
	if (n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		*(buf_dest + i) = *(buf_src + i);
		i++;
	}
	return (dest);
}

int main() 
{ 
char csrc[] = "GeeksforGeeks"; 
char cdest[100]; 
char cdest2[100]; 
ft_memcpy(cdest, csrc, strlen(csrc)+1); 
memcpy(cdest2, csrc, strlen(csrc)+1); 
printf("ft string is %s\n", cdest); 
printf("std string is %s\n", cdest2); 
  
int isrc[] = {0, 0}; 
int n = sizeof(isrc)/sizeof(isrc[0]); 
int idest[n], i; 
int idest2[n], j;
ft_memcpy(idest, isrc, sizeof(isrc)); 
memcpy(idest2, isrc, sizeof(isrc)); 
printf("\nCopied array is "); 
for (i=0; i<n; i++) 
    printf("%d ", idest[i]); 
    printf("\nCopied array is "); 
for (j=0; j<n; j++) 
    printf("%d ", idest[j]); 

char dest[100];
char dest2[100];
char *rtn = (char *)ft_memcpy(dest, NULL, 0);
printf("%s\n", rtn);
return 0; 
} 
