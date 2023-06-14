/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_win.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:31:37 by dohanyan          #+#    #+#             */
/*   Updated: 2023/04/26 21:06:35 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill(char **map, t_point size_map, t_point pos, char player)
{
	if (pos.y < 0 || pos.y >= size_map.y || pos.x < 0 || pos.x >= size_map.x
		|| (map[pos.y][pos.x] != player && map[pos.y][pos.x] != '0'
		&& map[pos.y][pos.x] != 'C' && map[pos.y][pos.x] != 'E'))
		return ;
	map[pos.y][pos.x] = '-';
	fill(map, size_map, (t_point){pos.x - 1, pos.y}, player);
	fill(map, size_map, (t_point){pos.x + 1, pos.y}, player);
	fill(map, size_map, (t_point){pos.x, pos.y - 1}, player);
	fill(map, size_map, (t_point){pos.x, pos.y + 1}, player);
}

void	flood_fill(char **map, t_point size_map, t_point pos)
{
	fill(map, size_map, pos, map[pos.y][pos.x]);
}
