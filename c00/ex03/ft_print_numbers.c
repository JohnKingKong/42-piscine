// ecrire une fonction qui affiche tous les chiffres sur une seule ligne.

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char a;

	a = 48;
	while (a <= 57)
	{
		write(1, &a, sizeof(a));
		a += 1;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_print_numbers();
	return 0;
}
