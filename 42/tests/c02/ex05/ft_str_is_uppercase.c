// ecrire une fct qui retourne 1 si str est en majuscules sinon 0

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i += 1;
		else
			return (0);
	}
	return (1);
}
