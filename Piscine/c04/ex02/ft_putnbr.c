// ecrire une fct qui affiche un nb pass/ en param

void	ft_putnbr(int nb);
void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	long nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl /10);
		nbl = nbl % 10;
	}
	if (nbl <= 9)
		ft_putchar('0' + nbl);
}
