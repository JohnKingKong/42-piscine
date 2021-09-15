// ecire une fct qui reproduit a lidentique strcmp

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[]= "abcde";
	char s2[] = "abcde";
	char s3[] = "abcDe";
	char s4[] = "abc3e";

	printf("%d \n", ft_strcmp(s3, s2));
	printf("%d \n", ft_strcmp(s1, s3));
	printf("%d \n", ft_strcmp(s1, s4));
	printf("%d \n", strcmp(s3, s2));
	printf("%d \n", strcmp(s1, s3));
	printf("%d \n", strcmp(s1, s4));
	
	return (0);
}
