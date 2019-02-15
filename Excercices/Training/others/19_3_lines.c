int	main()
{
	char i;
	char  j;
	char  val;	

	i = '0';
	j = '0';
	val = '1';

	while (i < '3')
	{
		while (j < '3')
		{
			write(1, &val, 1);
			val++;
			j++;
		}
		j = '0';
		i++;
		write (1, "\n", 1);
	}
	return (0);
}
