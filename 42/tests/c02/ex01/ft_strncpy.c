// ecrire une fct qui reproduis a lidentique la fct strncpy

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int	main()
{
	char src[] = "1234567890";
	char dest[100];
	printf("%s \n", ft_strncpy(dest, src, 5));
	return 0;
}
