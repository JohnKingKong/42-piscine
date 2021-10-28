//ecrire une fct qui ret 1 si str juste char affiochable, sinon 0

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 127))
			i += 1;
		else
			return (0);
	}
	return (1);
}
