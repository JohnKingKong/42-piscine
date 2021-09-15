// ecrire une fct qui reproduit a l'identique la fct strstr

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return (str);
	while (str[i])
	{	
		while (str[i + j] == to_find[j])
		{
			if (j + 1 == len)
				return (str + i);
			j++;
			
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "bigs2dk df4hksjh 420j lmao yaashdjkb";
	char to_find[] = "410";

	printf("%s \n", strstr(str, to_find));
	printf("%s \n", ft_strstr(str, to_find));
	return 0;
}
