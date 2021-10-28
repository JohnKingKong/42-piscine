// ecirer une fct qui inverse l'ordre des elements d>n int array
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int j;

	i = 0;
	j = size - 1;
	while (i < size/2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
int main ()
{
	int tab[]={1,2,3,4,5};
	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
