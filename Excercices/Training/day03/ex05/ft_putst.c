#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		*str++;
	}
}

int	main(void)
{
	char str;
	
	str = 'f';
	ft_putstr(&str);
	return (0);
}
