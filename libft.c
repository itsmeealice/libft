
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>


void ft_strlcpy(char *dest, const char *src, size_t size)
{
	int i = 0; 

	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] ='\0';
}




int	main(void)
{
	char src[] = "ABCDE";
	char dest[] = "thisismydestinationstring";
	
	printf("original implementation\n");

	printf("Before source: %s  destination: %s \n", src, dest);
	ft_strlcpy(dest, src, 4);
	printf("Before source: %s  destination: %s \n", src, dest);


	printf("my implementation\n");

	printf("Before source: %s  destination: %s \n", src, dest);
	ft_strlcpy(dest, src, 4);
	printf("Before source: %s  destination: %s \n", src, dest);
	
}
