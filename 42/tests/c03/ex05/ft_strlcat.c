// ecrire une fct qui reproduit a l'identique la fct strlcat

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest = '\0';
	return (j + 1);
