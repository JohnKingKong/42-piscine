/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if2last4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:12:48 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 19:16:55 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	if2last4_line(char **input, char tabxy[4][4])
{
	int i;
	int	i2;

	i = 0;
	i2 = 8;
	while (i2 < 12)
	{
	if (input[1][i2 * 2] == '2' && tabxy[i][0] == '4')
			tabxy [i][3] = '3';
		i++;
		i2++;
	}
	i2 = 12;
	i = 0;
	while (i2 < 16)
	{	
		if (input[1][i2 * 2] == '2' && tabxy[i][3] == '4')
			tabxy [i][0] = '3';
		i++;
		i2++;
	}
}


void	if2last4_col(char **input, char tabxy[4][4])
{
	int i;
	int	i2;
	
	i2 = 0;
	i = 0;
	while (i < 4)
	{
		if (input[1][i2 * 2] == '2' && tabxy[3][i] == '4')
			tabxy [0][i] = '3';
	i++;
	}
	i2 = 4;
	i = 0;
	while (i2 < 8)
	{	
 		if (input[1][i2 * 2] == '2' && tabxy[0][i] == '4')
			tabxy [3][i] = '3';
		i++;
		i2++;
	}
}
