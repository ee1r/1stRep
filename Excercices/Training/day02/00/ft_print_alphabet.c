#include <unistd.h>

void	ft_putchar()
{
	int ch;

	ch ='a';
	while (ch <= 'z')
	{
		write (1, &ch, 1);
		ch++;	
	}
	
	write (1, "\n", 1);
	
}

int	main()
{
	ft_putchar();
	return (0);
}
