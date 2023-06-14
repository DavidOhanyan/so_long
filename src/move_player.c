/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:04:06 by dohanyan          #+#    #+#             */
/*   Updated: 2023/05/16 17:52:37 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *game)
{
	if (game->map[game->player.y - 1][game->player.x] != '1')
	{
		if (game->map[game->player.y - 1][game->player.x] == 'X')
			game_clean(game, 0);
		if (game->map[game->player.y - 1][game->player.x] == 'C')
			game->image.score--;
		if (game->map[game->player.y - 1][game->player.x] == 'E')
		{
			if (game->image.score == 0)
				game_clean(game, 1);
			game->map[game->player.y - 1][game->player.x] = 'L';
		}
		else
			game->map[game->player.y - 1][game->player.x] = 'P';
		if (game->map[game->player.y][game->player.x] == 'L')
			game->map[game->player.y][game->player.x] = 'E';
		else
			game->map[game->player.y][game->player.x] = '0';
		game->player.y = game->player.y - 1;
	}
}

void	move_down(t_game *game)
{
	if (game->map[game->player.y + 1][game->player.x] != '1')
	{
		if (game->map[game->player.y + 1][game->player.x] == 'X')
			game_clean(game, 0);
		if (game->map[game->player.y + 1][game->player.x] == 'C')
			game->image.score--;
		if (game->map[game->player.y + 1][game->player.x] == 'E')
		{
			if (game->image.score == 0)
				game_clean(game, 1);
			game->map[game->player.y + 1][game->player.x] = 'L';
		}
		else
			game->map[game->player.y + 1][game->player.x] = 'P';
		if (game->map[game->player.y][game->player.x] == 'L')
			game->map[game->player.y][game->player.x] = 'E';
		else
			game->map[game->player.y][game->player.x] = '0';
		game->player.y = game->player.y + 1;
	}
}

void	move_left(t_game *game)
{
	if (game->map[game->player.y][game->player.x - 1] != '1')
	{
		if (game->map[game->player.y][game->player.x - 1] == 'X')
			game_clean(game, 0);
		if (game->map[game->player.y][game->player.x - 1] == 'C')
			game->image.score--;
		if (game->map[game->player.y][game->player.x - 1] == 'E')
		{
			if (game->image.score == 0)
				game_clean(game, 1);
			game->map[game->player.y][game->player.x - 1] = 'L';
		}
		else
			game->map[game->player.y][game->player.x - 1] = 'P';
		if (game->map[game->player.y][game->player.x] == 'L')
			game->map[game->player.y][game->player.x] = 'E';
		else
			game->map[game->player.y][game->player.x] = '0';
		game->player.x = game->player.x - 1;
	}
}

void	move_right(t_game *game)
{
	if (game->map[game->player.y][game->player.x + 1] != '1')
	{
		if (game->map[game->player.y][game->player.x + 1] == 'X')
			game_clean(game, 0);
		if (game->map[game->player.y][game->player.x + 1] == 'C')
			game->image.score--;
		if (game->map[game->player.y][game->player.x + 1] == 'E')
		{
			if (game->image.score == 0)
				game_clean(game, 1);
			game->map[game->player.y][game->player.x + 1] = 'L';
		}
		else
			game->map[game->player.y][game->player.x + 1] = 'P';
		if (game->map[game->player.y][game->player.x] == 'L')
			game->map[game->player.y][game->player.x] = 'E';
		else
			game->map[game->player.y][game->player.x] = '0';
		game->player.x = game->player.x + 1;
	}
}
