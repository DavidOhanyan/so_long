/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:04:51 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/30 18:52:29 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_num_error3(char **map)
{
	int	i;
	int	j;

	j = 0;
	i = ft_width_map(map) - 1;
	while (map[i][j] != '\0')
	{
		if (map[i][j] != '1')
		{
			write(1, "ERROR: INVALID MAP!\n", 20);
			exit(0);
		}
		else
		j++;
	}
}

void	ft_num_error2_con(char **map, int *i, int *j)
{
	int	siz;

	siz = ft_strlen(map[*i]);
	while (*j < siz - 1 && map[*i][*j] != '\0')
	{
		if (map[*i][*j] == '1' || map[*i][*j] == '0'
			|| map[*i][*j] == 'C' || map[*i][*j] == 'E'
				|| map[*i][*j] == 'P' || map[*i][*j] == 'X')
				(*j)++;
		else
		{
			write(1, "ERROR: INVALID MAP!\n", 20);
			exit(0);
		}
	}
	if (map[*i][*j] != '1')
	{
		write(1, "ERROR: INVALID MAP!\n", 20);
		exit(0);
	}
	else
		(*j)++;
}

void	ft_num_error2(char **map)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (map[i] && i < ft_width_map(map) - 1)
	{
		while (map[i][j] != '\0')
		{
			if (map[i][j] == '1')
			{
				j++;
				ft_num_error2_con(map, &i, &j);
			}
			else
			{
				write(1, "ERROR: INVALID MAP!\n", 20);
				exit(0);
			}
		}
		i++;
		j = 0;
	}
}

void	ft_num_error1(char **map)
{
	int	siz;
	int	i;
	int	j;

	siz = 0;
	i = 0;
	j = 0;
	while (map[i][j] != '\0')
	{
		if (map[i][j] != '1')
		{
			write(1, "ERROR: CORECT MAP!\n", 19);
			exit(0);
		}
		else
		j++;
	}
}
