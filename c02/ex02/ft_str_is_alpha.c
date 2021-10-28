// ecrire une fct qui ret 1 si juste des char alpha ou 0 sinon

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) ||
			(str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
			return(0);
	}
	return (1);

}
int main ()
{
	char str[]="asdasdASFASDFDKa";
	printf("%d \n", ft_str_is_alpha(str));
	return 0;
}
