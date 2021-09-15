// ecrire une fonction qui ecris les combinaisons de deux nombres entre 00 et 99  >>.

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char a);
void	writedown(int i);
void	virg(int i, int j);

void	writedown(int i)
{
	ft_putchar('0' + (i / 10));
	ft_putchar('0' + (i % 10));
}
void	virg(int i, int j)
{
	if (!(i == 98 && j == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}


void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 01;
	while (a <= 99)
	{
		while (b <= 99)
		{
			writedown(a);
			ft_putchar(' ');
			writedown(b);
			virg(a, b);
		b++;
		}
		a++;
		b = a + 1;
	} 
	ft_putchar('\n');
}
int main()
{
	ft_print_comb2();
	return 0;
}
