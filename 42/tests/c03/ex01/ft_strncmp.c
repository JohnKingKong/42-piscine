//ecrire une fct qui reproduit a lidentique la fct strncmp

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && i <= n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	i--;
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[] = "abcdefgh";
	char s2[] = "abcdefGh";
	printf("%d \n", ft_strncmp(s1, s2, 5));
	printf("%d \n", strncmp(s1, s2, 5));
	return 0;
}
