// ecrire une fct qui reproduit a lidentique la fct strcat

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}
int main()
{
	char dest[] = "gab est wack";
	char src[] = " mais moins que jr";
	printf("%s \n", src);
	printf("%s \n", dest);
	ft_strcat(dest, src);
	printf("%s \n", src);
	printf("%s \n", dest);

	return 0;
}
