// ecrire une fct qui divse a et b et stock ds *a, et mod ds *b

#include <stdio.h>

void	ft_putchar(char a);

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swap;

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
	printf("%d \n", *a);
	printf("%d \n", *b);
}
int main()
{
	int a = 103;
	int b = 4;
	
	printf("%d \n", a);
	printf("%d \n", b);
	ft_ultimate_div_mod(&a, &b);
	return 0;
}
