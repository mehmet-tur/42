#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int xyz;

	xyz = *a;
	*a = *b;
	*b = xyz;
}

int	main()
{
	int c;
	int d;

	c = 4;
	d = 5;
	ft_swap(&c, &d);
	printf("%d", c);
	printf("%d", d);
}
