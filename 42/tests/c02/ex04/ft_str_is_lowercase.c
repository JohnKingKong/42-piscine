// ecrire une fct qui ret 1 si str est en minuscule sinon 0

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			i += 1;
		else
			return (0);
	}
	return (1);
}
