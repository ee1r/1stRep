void	ft_swapCh(char *a, char *b)
{
	char buf;

	buf = *a;
	*a = *b;
	*b = buf;
}
