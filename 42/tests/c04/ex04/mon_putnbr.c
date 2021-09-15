#include <unistd.h>
void    ft_putchar(char a);
int     check_true(char *base);
int    longueur(char *base);
void    ft_putnbr_base(int nbr, char *base);

void    ft_putchar(char a)
{

    write(1, &a, sizeof(a));
}

int    longueur(char *base)
{
    int i;

    i = 0;
    while (base[i])
        i++;
    return (i);
}

int     check_true(char *base)
{
    int i;
    int j;

    i = 0;
    if (longueur(base) < 2)
        return (0);
    while(base[i])
    {
        if ((base[i] <= 47) || ((base[i] >= 58) && (base[i] <= 64))
                || ((base[i] >= 91) && (base[i] <= 96)) || (base[i] >= 123))
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}
void    ft_putnbr_base(int nbr, char *base)
{
    int i;
    char nbfinal[200];

    i = 0;
    if (!(check_true(base)))
        return;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        nbfinal[i] = (base[nbr % (longueur(base))]);
        nbr = nbr / (longueur(base));
        i++;
    }
    while (--i >= 0)
        ft_putchar(nbfinal[i]);
}
int main()
{
    char str10[] = "0123456789";
    char str2[] = "01";
    char str8[] = "01234567";
    char str16[] = "0123456789ABCDEF";
    ft_putnbr_base(976, str10);
    ft_putchar('\n');
    ft_putnbr_base(976, str2);
    ft_putchar('\n');
    ft_putnbr_base(976, str8);
    ft_putchar('\n');
    ft_putnbr_base(976, str16);
    ft_putchar('\n');
    return 0;

}
