/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:56:51 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/29 21:01:24 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_point	player_posign(char **map)
{
	t_point	kord;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (map[y])
	{	
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P')
			{
				kord.x = x;
				kord.y = y;
			}
			x++;
		}
		y++;
	}
	return (kord);
}
