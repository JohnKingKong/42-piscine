// ecrire une fct qui renvoie la racine carre dun nb en tre en param, et 0 si non entier

#include <stdio.h>

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
        return 0;
    while (i < (nb / 2))
    {
        if ((i * i) == nb)
            return i;
        i++;
    }
    return 0;
}
int main()
{
    int nb = 81;
    printf("%d \n", ft_sqrt(nb));
    return 0;
}
