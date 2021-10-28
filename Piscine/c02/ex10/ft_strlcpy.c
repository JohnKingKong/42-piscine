// ecrire une fct qui reproduit a lidentique la fct strlcpy

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i <= size)
	{
		if (i = size)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
