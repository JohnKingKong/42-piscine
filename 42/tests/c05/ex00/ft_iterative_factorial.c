// ecrire une fct iterative qui renvoie la factorielle du nb passe en param

#include <stdio.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
    int i;
    int j;

    i = 1;
    j = 1;
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        j = j * i ;
        i++;
    }
    return (j);
}
int main()
{
    int nb = 10;


    printf("%d \n", ft_iterative_factorial(nb));
    return 0;
}
