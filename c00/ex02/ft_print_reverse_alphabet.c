//ecrire une fonction qui ecris l'alphabet en decroissant en partant de z.

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, sizeof(a));
		a--;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}

