/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:14:03 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/28 10:27:24 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int	size, char	**strs, char *sep)
{
	int		i;
	char	*strfin;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strfin = malloc(sizeof(**strs) + (sizeof(*sep + 1) * size));
	if (strfin == NULL)
		return (0);
	while (i < size)
	{
		writing2(&k, i, strfin, strs);
		i++;
		if (i < size)
			writing(&j, &k, strfin, sep);
	}
	strfin[k] = '\0';
	return (strfin);
}

void	writing(int	*j, int	*k, char *strfin, char *sep)
{
	while (sep[*j] != 0)
	{
		strfin[*k] = sep [*j];
		*k = *k + 1;
		*j = *j + 1;
	}
	*j = 0;
}

void	writing2(int *k, int i, char *strfin, char **strs)
{
	int	j;

	j = 0;
	while (strs[i][j] != 0)
	{
		strfin[*k] = strs[i][j];
		*k = *k + 1;
		j = j + 1;
	}
}
