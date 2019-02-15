void	rush02(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;

	if (i == 1)
	{
		ft_top_line(x, y, i, j);
	}
}

void	ft_top_line(int x, int y, int i, int j)
{
	if (j == 1)
	{
		write(1, "A", 1);
	}
	if (j !=  x && j != 1)
	{
		write(1, "B", 1);
	}
	if (j == x && j != 1)
	{
		write(1, "A\n", 2);
	}
}
