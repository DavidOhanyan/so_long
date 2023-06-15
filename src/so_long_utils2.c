/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:16:15 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/29 21:57:09 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_width_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	count_coins(char **map)
{
	int	x;
	int	y;
	int	score;

	score = 0;
	x = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'C')
				score++;
			x++;
		}
		y++;
	}
	return (score);
}

t_point	ft_map_size(char **map)
{
	t_point	size;
	int		lenght;
	int		width;

	lenght = ft_strlen(map[0]);
	width = ft_width_map(map);
	size.x = lenght;
	size.y = width;
	return (size);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}
