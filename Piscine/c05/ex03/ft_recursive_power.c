// ecrire une fct recursive qui renvoie une puissance(passe en param) dun nb (passe en param)

#include <stdio.h>
int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
    if (power < 0 || nb < 0)
        return (0);
    if (power == 0 || nb == 1)
        return (1);
    return (nb * (ft_recursive_power(nb, power - 1)));
}
int main()
{
    int nb = 4;
    int power = 6;
    printf("%d \n", ft_recursive_power(nb,power));
    return 0;
}
