// ecrire une fct qui reproduit a l'identique la fct strncat

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char * src, unsigned int n);

char	*ft_strncat(char *dest, char * src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int main ()
{
	char	dest[] = "Yolo";
	char	src[] = "1234567890abcdefg";
	printf("dest : %s, src : %s \n", dest, src);
//	strncat(dest, src, 4);
//	printf("dest : %s, src : %s \n", dest, src);
	ft_strncat(dest, src, 4);
	printf("dest : %s, src : %s \n", dest, src);
	return 0;
}
