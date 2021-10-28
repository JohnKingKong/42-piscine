// ecrire une fct qui retourne le nb de caracteres dans une str donne en param

void	ft_putchar(char a);
int	ft_strlen(char *str);
int	ft_strlen(char *str)
{
	int i;

	i = 9;
	while (str[i])
		i += 1;
	return (i);
}
