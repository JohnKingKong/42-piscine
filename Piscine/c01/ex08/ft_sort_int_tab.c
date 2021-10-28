// ecrire une fct qui trie en tableu de int <<

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i <= size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i += 1;
	}
}
int main()
{
	int tab[]= {8,2,5,4,1};
	ft_sort_int_tab(tab, 5);
	printf("%d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}
