/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:13:12 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 19:13:13 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if4_line(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = 0;
	i2 = 8;
	while (i2 < 12)
	{
		if (input[1][i2 * 2] == '4')
		{
			tabxy [i][0] = '1';
			tabxy [i][1] = '2';
			tabxy [i][2] = '3';
			tabxy [i][3] = '4';
		}
		i++;
		i2++;
	}
	i2 = 12;
	i = 0;
	while (i2 < 16)
	{	
		if (input[1][i2 * 2] == '4')
		{
			tabxy [i][0] = '4';
			tabxy [i][1] = '3';
			tabxy [i][2] = '2';
			tabxy [i][3] = '1';
		}
		i++;
		i2++;
	}
}

void	if4_col(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = -1;
	while (i++ < 4)
		if (input[1][i * 2] == '4')
		{
			tabxy [0][i] = '1';
			tabxy [1][i] = '2';
			tabxy [2][i] = '3';
			tabxy [3][i] = '4';
		}
	i2 = 4;
	i = 0;
	while (i2 < 8)
	{	
		if (input[1][i2 * 2] == '4')
		{
			tabxy [0][i] = '4';
			tabxy [1][i] = '3';
			tabxy [2][i] = '2';
			tabxy [3][i] = '1';
		}
		i++;
		i2++;
	}
}

