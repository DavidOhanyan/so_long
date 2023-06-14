/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flood_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:57:11 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/29 20:39:29 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_from_flood(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P' || map[y][x] == 'C' || map[y][x] == 'E')
			{
				write (1, "ERROR: CANT WIN!\n", 17);
				exit(0);
			}
			x++;
		}
		y++;
	}
}
