/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if2_lastXX41.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:11:03 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 19:21:56 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if2_lastxx41_line(char **input, char tabxy[4][4])
{
	int i;
	int	i2;
	i = 0;
	i2 = 0  ;
	
	while (i2 < 4)
	{
		if (input[1][i2 * 2] == '2' && tabxy[2][i] == '4' && tabxy[3][i] == '1')
		{
			tabxy [0][i] = '3';
			tabxy [1][i] = '2';
		}
		else if (input[1][i2 * 2] == '2' && tabxy[2][i] == '1' && tabxy[3][i] == '4')
		{
			tabxy [0][i] = '3';
			tabxy [1][i] = '2';
		}
		
		i2++;
		i++;
	}
	
	i2 = 4;
	i = 0;
	while (i2 < 8)
	{	
		if (input[1][i2 * 2] == '2' && tabxy[1][i] == '1' && tabxy[0][i] == '4')
		{
		
			tabxy [2][i] = '2';
			tabxy [3][i] = '3';
					
		}
		else if (input[1][i2 * 2] == '2' && tabxy[0][i] == '1' && tabxy[1][i] == '4')
		{
			tabxy [2][i] = '2';
			tabxy [3][i] = '3';
		
		}
				
		i++;
		i2++;
	}
	
}

void	if2_lastxx41_col(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = 0;
	i2 = 8;
	while (i < 12)
	{
		if (input[1][i2 * 2] == '2' && tabxy[i][2] == '1' && tabxy[i][3] == '4')
		{
			tabxy [i][0] = '3';
			tabxy [i][1] = '2';
		}
		else if (input[1][i2 * 2] == '2' && tabxy[i][2] == '4' && tabxy[i][3] == '1')
		{
			tabxy [i][0] = '3';
			tabxy [i][1] = '2';
		}

		i++;
	}
	i2 = 12;
	i = 0;
	while (i2 < 16)
	{	
		if (input[1][i2 * 2] == '2' && tabxy[i][1] == '4' && tabxy[i][0] == '1')
		{
		
			tabxy [i][2] = '2';
			tabxy [i][3] = '3';
					
		}
		else if (input[1][i2 * 2] == '2' && tabxy[i][1] == '1' && tabxy[i][0] == '4')
		{
			tabxy [i][2] = '2';
			tabxy [i][3] = '3';
		
		}
	
		i++;
		i2++;
	}
}

