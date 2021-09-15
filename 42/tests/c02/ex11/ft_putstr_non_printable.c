// ecrire une fct qui affiche une str, si char non printable, affiche en hexadecimal avec \ devant

void	ft_putchar(char a);
void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 1) && (str[i] <= 31))
		ft_putchar(str[i]);
		i++;
	}
}
