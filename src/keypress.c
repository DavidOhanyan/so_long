/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:58:21 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 19:50:33 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	keypress(int keycode, t_game *game)
{
	if (keycode == KEY_ESC)
		game_clean(game, 3);
	game->rem.x = game->player.x;
	game->rem.y = game->player.y;
	if (keycode == KEY_UP)
		move_up(game);
	if (keycode == KEY_DOWN)
		move_down(game);
	if (keycode == KEY_RIGHT)
	{
		game->image.for_player = 0;
		move_right(game);
	}
	if (keycode == KEY_LEFT)
	{
		game->image.for_player = 1;
		move_left(game);
	}
	if (game->image.score == 0)
		game->image.for_exit = 1;
	if ((game->rem.x != game->player.x || game->rem.y != game->player.y))
		++game->count_move;
	return (0);
}
