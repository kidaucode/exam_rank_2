unsigned int	lcm(unsigned int a, unsigned b)
{
	unsigned int	i;

	if (a > b)
		i = a;
	else
		i = b;
	if ((a == 0) || (b == 0))
		return (0);
	while (1)
	{
		if ((i % a == 0) && (i % b == 0))
			return (i);
		i++;
	}
}
