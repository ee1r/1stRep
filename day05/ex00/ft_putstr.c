#include <unistd.h>

int	ft_putstr(char *str);
void	ft_putchar(char c);


int	main(void)
{
	char str[] = "Hello";
	
	ft_putstr(str);
	ft_putchar('\n');
	return (0);	
}

int	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
