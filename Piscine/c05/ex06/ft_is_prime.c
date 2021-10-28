// ecrire une fct qui renvoie 1 si le nb en param est un nb premier et 0 si il ne lest pas

#include <stdio.h>

int ft_is_prime(int nb);

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 0)
        return 0;
    while (i != nb)
    {
        if (nb % i == 0)
           return (0);
        i++;
    }
    return (1);
}
int main()
{
    int nb = 18;
    printf("%d \n", ft_is_prime(nb));
    return 0;
}
