#include <unistd.h>

int	main()
{
	char num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		write(1, "\n", 1);
		num++;
	}
	return (0);
}
