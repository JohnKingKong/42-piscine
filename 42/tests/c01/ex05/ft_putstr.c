// ecrire une fct qui affiche une string a lecran

#include <unistd.h>

void	ft_putchar(char a);

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main ()
{
	ft_putstr("yolo allo");
	return 0;
}
