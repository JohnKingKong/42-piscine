// reproduire a lientique la fonction strcpy

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
int main ()
{
	char src[]="yolooo";
	char dest[100];
	printf("%s \n", src);
	printf("%s \n", dest);
	printf("%s \n", ft_strcpy(dest, src));
	return 0;
}
