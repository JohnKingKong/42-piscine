/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_battle_ship.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:11:42 by bdion             #+#    #+#             */
/*   Updated: 2021/10/28 12:26:07 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_battle_ship(char tabxy [4][4]);

void	ft_battle_ship(char tabxy [4][4])
{
	int	x1[4];
	int	x2[4];
	int	x3[4];
	int	y1[4];
	int	y2[4];
	int	y3[4];
	int	k[4] = {0,0,0,0};

	int	i;
	int j;
	int n;


	n = 0;
	while (n < 4)
	{
		i = 0;
		j = 0;
		while (i < 4)
		{   
			while (j < 4)
			{
				if (tabxy [i][j] == n + 49 && k[n] == 0)
					{
						x1 [n] = i;
						y1 [n] = j;
						k [n]++;
					}
				else if (tabxy [i][j] == n + 49 && k[n] == 1)
					{
						x2 [n] = i;
						y2 [n] = j;
						k [n]++;
					}
				else if (tabxy [i][j] == n + 49 && k [n] == 2)
					{
						x3 [n] = i;
						y3 [n] = j;
						k [n]++;
					}	
				j++;
			}
			j = 0;
			i++;
		}
		n++;
	}

	n = 0;
	while (n < 4)
	{
		if (k[n] == 3)
		{
			i = 0;
			j = 0;
			while (i < 4)
			{
				while (j < 4)
				{
					 if (i != x1[n] && i != x2[n] && i != x3[n] && j != y1 [n] && j != y2[n] && j != y3[n])
						tabxy [i][j] = n + 49;
					j++;
				}
				j = 0;
				i++;
			}
		}
		n++;			
	}
}
