// ecrire une fct qui ret 1 si str juste des chiffres sinon 0

int	ft_str_is_numeric(char *str);
int	ft_str_is_numeric(char *str)
{
	int i;
	while (str[i])
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i += 1;
		else
			return 0;
	}
	return (1);
}
