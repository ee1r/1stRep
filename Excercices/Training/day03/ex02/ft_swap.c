void	ft_swap(int *a, int *p)
{
	int buf;
	
	buf = *a;
	*a = *p;
	*p = buf;
}
