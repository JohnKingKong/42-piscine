// ecrire une fct qui retourne en int une s;tr, en se crissant des whitespace, en comptant les - face aux + (qui determine si pos ou neg) et qui stoppe aux premier char non num

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
    int neg;
    int final;

	i = 0;
    neg = 1;
    final = 0;
    while(((str[i] >= 11) && (str[i] <= 15)) || (str[i] == 32))
         i += 1;
    while ((str[i] == 45) || (str[i] == 43))
    {
        if (str[i] == 45)
        {
            neg *= -neg;
        }
        i += 1;
    }
    while ((str[i] >= 48) && (str[i] <= 57))
    {
        final = ((final * 10) + str[i] - 48);
        i++;
    }
    return (final * neg);
}
int main()
{
    char    str[] = "     --++--666asd";
    printf("%d \n", ft_atoi(str));
    printf("%d \n", atoi(str));
    return 0;
}

