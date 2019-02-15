#include <unistd.h>

int	main(void)
{
	int num;
	
	num = -10;
	ft_is_negative(num);
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{	
		ft_putchar('N');
	}
	else
	{	
		ft_putchar('P');
	}
}
