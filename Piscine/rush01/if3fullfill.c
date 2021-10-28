/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if3fullfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:13:02 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 19:13:05 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if3fullfill(char	tabxy[4][4])
{
	int i;
	int j;
	int k;
	int add;
	
	add = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		add = 0;
		while (j < 4)
		{
			add = add + (tabxy[i][j] - 48);
			if(tabxy[i][j] == '0')
			{
				k++;
			}
			j++;
		}
		j = 0;
		while(j < 4)
		{
			if (k == 1)
				{
					if(tabxy [i][j] == '0')
						tabxy[i][j] = 10 - add + 48;
				}
			j++; 
		}
	i++;
	}
	add = 0;
	i = 0;
	j = 0;
	k = 0;
	while (j < 4)
	{
		i = 0;
		add = 0;
		while (i < 4)
		{
			add = add + (tabxy[i][j] - 48);
			if(tabxy[i][j] == '0')
			{
				k++;
			}
			i++;
		}
		i = 0;
		while(i < 4)
		{
			if (k == 1)
				{
					if(tabxy [i][j] == '0')
						tabxy[i][j] = 10 - add + 48;
				}
			i++; 
		}
	j++;
	}

}
