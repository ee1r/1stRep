#include <unistd.h>

int	ft_print_reverse_alphabet(void)
{
	char ch;
	
	ch = 'z';
	while (ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
