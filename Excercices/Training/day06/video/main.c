int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
		ft_putstr("usage: ./a.out smth");
	ft_putchar('\n');
	return (0);
}
