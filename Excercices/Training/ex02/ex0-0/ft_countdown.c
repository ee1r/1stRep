#include <unistd.h>

int	ft_countdown(void)
{
	char d;

	d = '9';
	while (d >= '0')
	{
		write(1, &d, 1);
		d--;
	}
	return (0);
}

int	main(void)
{	
	char c;

	c = '\n';
	ft_countdown();
	write(1, &c, 1);
	return (0);
}
