// ecrire une fct qui renvoie le n ieme nb de la suite de fibonacci

#include <stdio.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index <= 2)
        return 1;
    return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
int main()
{
    int nb = 5;
    printf("%d \n", ft_fibonacci(nb));

    return 0;
}
