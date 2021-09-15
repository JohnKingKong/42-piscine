// ecrire une fonction qui divise a et b et stock le resultat ds *div et le reste dans *mod
#include <stdio.h>

void	ft_putchar(char a);
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main ()
{
	int	a = 103;
	int	b = 4;
	int	div;
	int	mod;

	ft_div_mod(a,b, &div, &mod);
	if (div > 10)
	{
		ft_putchar((div/10) + '0');
		ft_putchar((div%10) + '0');
	}
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('0' + mod);
	ft_putchar('\n');
	return 0;

}
