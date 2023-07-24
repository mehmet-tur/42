#include <stdio.h>

void	ft_div_mod(int a,int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a;
	int b;
	int c;
	int d;

	c = 20;
	d = 3;
	ft_div_mod(a, b, div, mod);
	printf("%d", c);
	printf("%d", d);
}

