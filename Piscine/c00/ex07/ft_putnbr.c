// ecrire une fonction qui permet d'afficher tous les nombres possible en int rentre en parametre

#include <unistd.h>

void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl > 10)
	{	
		ft_putnbr(nbl / 10);
		nbl = nbl % 10;
		ft_putchar('0' + nbl);
	}
	else
		ft_putchar('0' + nbl);
}