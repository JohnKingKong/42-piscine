// ecrire une fonction qui affiche 'N' si un int n est neg, et 'P' si lint n est positif;

#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n)
{
	
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
int main()
{
	ft_is_negative(-21);
	return 0;
}
