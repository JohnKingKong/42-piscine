// ecrire une fct iterative qui renvoie une puissance choisi en param dun nb passe en param

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
    int i;
    int nbf;

    i = 1;
    nbf = nb;
    if (power < 0 || nb < 0)
        return (0);
    if (power == 0 || nb == 1)
        return (1);
    while (i < power)
    {
        nbf = nb * nbf;
        i++;
    }
    return (nbf);
}
int main()
{
    int nb = 10;
    int power = 9;
    printf("%d \n", ft_iterative_power(nb, power));
    return 0;
}
