// ecrire une fct recursive qui retourne le factoriel du nb passe en param

#include <stdio.h>
int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
    if (nb == 1 || nb == 0)
        return 1;
    if (nb < 0)
        return (0);
   return (nb * ft_recursive_factorial(nb - 1));
    
}
int main()
{
    int nb = 4;
    printf("%d \n", ft_recursive_factorial(nb));
    return 0;
}
