#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	main(void)
{
	char src[] = "asdf";
	char dest[] = "lkjsdlfkjsdf";
	int i;	

	ft_strcpy(dest, src);

	i = 0;
	while(i < 34)
	{
		printf("%c\n", dest[i] == '\0' ? 'X': dest[i]);
		i++;
	}
}
