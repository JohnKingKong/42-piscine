//Fonction putchar qui ecris un char sur la sortie standard.

#include <unistd.h>

void	ft_putchar(char x);

void	ft_putchar(char x)
{
	write(1, &x, sizeof(x));
}
