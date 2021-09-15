// ecrire une fonction qui affiche ds l'ordre croissant, les diff combinaison (croissant) de trois chiffres.


#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char a);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				if (!(i == 7 && j == 8 && k == 9))
				{ 
				ft_putchar(',');
				ft_putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
	ft_putchar('\n');
}
int main ()
{
	ft_print_comb();
	return 0;
}
