// ecrire une fonction qui affiche les diff combinaisons possibles de n chifres >>>

#include <unistd.h>
#include <stdio.h>
void	ft_print_combn(int n);
void	ft_putchar(char a);


void	ft_print_combn(int n)
{
	char str[]="0123456789";
	int	i;
	int	j;
	char	k;

	i = 0;
	while (n > 0)
	{
		str[i] = 48;
		n--;
		i++;
	}
	str[i] = '\0';
	j = 0;
	i--;
	while (i >= 0)
	{
		while (str[j])	
		{
			k = 48;
			while (k <= 57)
			{
				str[j] = (str[j] + 1);
				k = k + 1;
			}
		j++;
		}
	i--;
	}
	printf("%s\n", str);
}
int main()
{
	ft_print_combn(1);
	return 0;
}
