#include "ft_swapCh.c"
#include "ft_putnbr.c"


int	main()
{
	char a[] = {'1', '2', '3'};
	char b[] = {'4', '5', '6'};
	int i;
	
	i = 0;
	while (i < 3);
	{	
		ft_swapCh(a[i], b[i]);
		i++;
	}
	ft_putnbr(a[0]);
	ft_putchar('\n');
	ft_putnbr(a[1]);
	ft_putchar('\n');
	ft_putnbr(a[2]);
	ft_putchar('\n');
	ft_putnbr(b[0]);
	ft_putchar('\n');
	ft_putnbr(b[1]);
	ft_putchar('\n');
	ft_putnbr(b[2]);
	ft_putchar('\n');
	return (0);
}
