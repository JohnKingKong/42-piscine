// ecrire une fct qui affiche toutes les possibilites de placer dix dames sur un echiquier de 10x10 sans quelles ne puissent satteindre en un seul coup
// recursive
// return = int du nb de solutions affiche

#include <unistd.h>

int     ft_ten_queens_puzzle(void);
void    ft_putchar(char a);

void    ft_putchar(char a)
{
    write(1, &a, sizeof(a));
}

int ft_ten_queens_puzzle(void)
{
    int col;

    col = 9;
    while (col >= 0)
    {

        col--;
    }

}
