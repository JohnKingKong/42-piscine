/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:10:48 by bdion             #+#    #+#             */
/*   Updated: 2021/08/15 20:03:45 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_put_char(char a);
void	ft_print_lines(char a, char b, char c, char d,char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p);
void	if1_col(char **input, char tabxy [4][4]);
void	if1_line(char **input, char tabxy[4][4]);
void	if2last4_col(char **input, char tabxy[4][4]);
void	if2last4_line(char **input, char tabxy[4][4]);
void	if4_col(char **input, char tabxy [4][4]);
void	if4_line(char **input, char tabxy[4][4]);
void	if3fullfill(char	tabxy[4][4]);
void	ft_battle_ship(char	tabxy[4][4]);
void	if2_lastxx41_col(char **input, char tabxy[4][4]);
void	if2_lastxx41_line(char **input, char tabxy[4][4]);
void	if2_lastxx32_col(char **input, char tabxy[4][4]);
void	if2_lastxx32_line(char **input, char tabxy[4][4]);


int	main(int argc, char **argv)
{
	char tabxy [4][4];
	int i;
	int j;
	int k;
	
	argc = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		tabxy[i][j] =  48;
	 	while ( j < 4)
	 	{
	 		tabxy[i][j] = 48;
			 j++;
	 	}
	i++;
	j = 0;
	}

	i = 0;
	while (i++ < 2100)
	{
		if1_col(argv, tabxy);
		if1_line(argv, tabxy);
		if4_col(argv, tabxy);
		if4_line(argv, tabxy);
		if2last4_col(argv, tabxy);
		if2last4_line(argv, tabxy);
		if2_lastxx41_col(argv, tabxy);
		if2_lastxx41_line(argv, tabxy);
		if2_lastxx32_col(argv, tabxy);
		if2_lastxx32_line(argv, tabxy);
		ft_battle_ship(tabxy);
		if3fullfill(tabxy);
	}
	i = 0;
	j = 0;

	ft_print_lines(tabxy[0][0], tabxy [0][1], tabxy[0][2], tabxy[0] [3], tabxy[1][0], tabxy [1][1], tabxy[1][2], tabxy[1] [3], tabxy[2][0], tabxy [2][1], tabxy[2][2], tabxy[2] [3], tabxy[3][0], tabxy [3][1], tabxy[3][2], tabxy[3] [3]);
}
