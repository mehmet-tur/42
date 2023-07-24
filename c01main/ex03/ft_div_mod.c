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
	int div;
	int mod;

	a = 20;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}

