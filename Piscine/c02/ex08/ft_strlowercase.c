// ecrire une fct qui met en minuscules les char dans str

char	ft_strlowercase(char *str);

char	ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 97))
			str[i] += 32;
		i += 1;
	}
	return ('a');
}
