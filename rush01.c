void	ft_putchar(char c);

void	print_line(char start, char mid, char end, int length)
{
	int	i;

	if (length > 0)
		ft_putchar(start);
	i = 1;
	while (i < length - 1)
	{
		ft_putchar(mid);
		i++;
	}
	if (length > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_line('/', '*', '\\', x);
		else if (i == y)
			print_line('\\', '*', '/', x);
		else
			print_line('*', ' ', '*', x);
		i++;
	}
}
