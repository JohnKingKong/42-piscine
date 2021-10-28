/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if2_lastXX32.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:12:33 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 19:12:38 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if2_lastxx32_line(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = 0;
	i2 = 8;
	while (i2 < 12)
	{
		if (input[1][i2 * 2] == '2' && tabxy[2][i] == '2' && tabxy[3][i] == '3')
		{
			tabxy [i][0] = '1';
			tabxy [i][1] = '4';
		}
		else if (input[1][i2 * 2] == '2' && tabxy[2][i] == '3' && tabxy[3][i] == '2')
		{
			tabxy [i][0] = '1';
			tabxy [i][1] = '4';
		}
		i2++;
		i++;
	}
	i2 = 12;
	i = 0;
	while (i2 < 16)
	{	
		if (input[1][i2 * 2] == '2' && tabxy[1][i] == '2' && tabxy[0][i] == '3')
		{
		
			tabxy [i][2] = '4';
			tabxy [i][3] = '1';
					
		}
		else if (input[1][i2 * 2] == '2' && tabxy[0][i] == '2' && tabxy[1][i] == '3')
		{
			tabxy [i][2] = '4';
			tabxy [i][3] = '1';
		
		}
	
		i++;
		i2++;
	}
}

void	if2_lastxx32_col(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = 0;
	while (i < 4)
	{
		if (input[1][i * 2] == '2' && tabxy[i][2] == '2' && tabxy[i][3] == '3')
		{
			tabxy [0][i] = '1';
			tabxy [1][i] = '4';
		}
		else if (input[1][i * 2] == '2' && tabxy[i][2] == '3' && tabxy[i][3] == '2')
		{
			tabxy [0][i] = '1';
			tabxy [1][i] = '4';
		}
		i++;
	}
	i2 = 4;
	i = 0;
	while (i2 < 8)
	{	
		if (input[1][i2 * 2] == '2' && tabxy[i][1] == '2' && tabxy[i][0] == '3')
		{
		
			tabxy [2][i] = '4';
			tabxy [3][i] = '1';		
		}
		else if (input[1][i2 * 2] == '2' && tabxy[i][0] == '2' && tabxy[i][1] == '3')
		{
			tabxy [2][i] = '4';
			tabxy [3][i] = '1';
		}
		i++;
		i2++;
	}
}

