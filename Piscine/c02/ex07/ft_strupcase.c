// ecrire une fct qui met en majuscule chaque lettre de str

#include <stdio.h>

char	ft_strupcase(char *str);

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (( str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i += 1;
	}
	return ('a');
}
int main()
{
	char	str[] = "ASsad12Ddd sa WQ 21 S";
	printf("%s \n", str);
	ft_strupcase(str);
	printf("%s \n", str);
	return 0;
}
