#include <unistd.h>

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a == '7' && b == '8' && c == '9')
					{
						ft_putchar(a, b, c);
						ft_putsign('.');
						break;
					}
				else
				{
					ft_putchar(a, b, c);
					ft_putsign(',');
					ft_putsign(' ');
					c++;
				}
			}
			b++;
		}
		a++;
	}
}

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putsign(char a)
{
	write(1, &a, 1);	
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
