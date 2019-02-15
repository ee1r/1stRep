#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strrev(char *src)
{
	int i;
	int count;
	char buf;
	
	i = 0;
	count = ft_strlen(src) - 1;
	while ( i < count)
	{
		buf = src[i];
		src[i] = src[count];
		src[count] = buf;
		i++;
		count--;
	}
	return (src);
}

int	main()
{
	char str1[] = "Hi, how are you?";
	
	ft_putstr(ft_strrev(str1));
	write(1, "\n", 1);
	return (0);
}
