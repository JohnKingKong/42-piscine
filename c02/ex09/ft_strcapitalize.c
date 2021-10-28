// ecrire une fct qui met en maj la premiere lettre de chaque mots, un chiffre compte pour une lettre

#include <stdio.h>
char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		i += 1;
	}
	if ((str[0] >= 97) && (str[0] <= 122))
		str[0] -= 32;
	i = 1;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) && ((str[j] >= 31 && str[j] <= 47) 
			|| (str[j] >= 58 && str[j] <=64)))
			str[i] -= 32;
		i++;
		j++;
	}
	return (str);
}
int main ()
{
	char str[] = "aLLO ls LS deEd32E 32lsd sd-ew+ew=DFAS 3 d E";
	printf("%s \n", str);
	ft_strcapitalize(str);
	printf("%s \n", str);
	return 0;
}
