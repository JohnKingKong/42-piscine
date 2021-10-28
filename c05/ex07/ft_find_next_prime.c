// ecrire une fct qui renvoie le nb premier immediatemment superieur ou egal au nb en param

#include <stdio.h>

int ft_find_next_prime(int nb);

int ft_find_next_prime(int nb)
{
    int i;
    int j;

    i = nb;
    j = 2;
    if (nb < 0)
        return 0;
    while (j != i)
    {
        if (i % j == 0)
            i++;
        j++;
    }
    return (i);
}
int main()
{
    int nb = 80;
    printf("%d \n", ft_find_next_prime(nb));
    return 0;
}
