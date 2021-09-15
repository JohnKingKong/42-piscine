// ecrire une fct qui echange le contenu de 2 entiers dont les adresses sont donn/es en param
#include <stdio.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
int main ()
{
	int a = 420;
	int b = 69;
	printf("%d \n", a);
	printf("%d \n", b);
	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d \n", b);
	return 0;
}
