// ecrire une fct qui affiche une str un char a la fois

void	ft_putstr(char *str);
void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return;
}
int main()
{
	char str[] = "YOLO BOII!!";
	ft_putstr(str);
	return 0;
}
