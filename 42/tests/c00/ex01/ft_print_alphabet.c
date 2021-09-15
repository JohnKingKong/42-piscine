// Ecrire une fonction qui ecris l'alphabet.
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, (sizeof(a)));
		a++;
	}
	write(1, "\n", 1);
}

int main ()
{
	ft_print_alphabet();
	return 0;
}
