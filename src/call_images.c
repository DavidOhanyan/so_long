/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:50:24 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 17:56:26 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	show_images2(t_game *game, int x, int y)
{
	if (game->map[x][y] == 'P' && game->image.for_player == 0)
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.player, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'P' && game->image.for_player == 1)
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.player2, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'E' && game->image.for_exit == 0)
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.exit2, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'E' && game->image.for_exit == 1)
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.exit, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'L')
	{
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.exit2, y * WIDTH, x * LENGHT);
		if (game->image.for_player == 1)
			mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
				game->image.player2, y * WIDTH, x * LENGHT);
		else
			mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
				game->image.player, y * WIDTH, x * LENGHT);
	}
}

void	show_images3(t_game *game, int x, int y, void *rem)
{
	if (game->map[x][y] == '1')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.wall, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'C')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			rem, y * WIDTH, x * LENGHT);
	if (game->map[x][y] == 'X')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
			game->image.enamy, y * WIDTH, x * LENGHT);
}

void	show_images(t_game *game, void *rem)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			mlx_put_image_to_window(game->mlx.ptr, game->mlx.win,
				game->image.floor, y * WIDTH, x * LENGHT);
			if (game->map[x][y] == 'C' || game->map[x][y] == 'X' ||
				game->map[x][y] == '1')
				show_images3(game, x, y, rem);
			if (game->map[x][y] == 'E' || game->map[x][y] == 'P'
				|| game->map[x][y] == 'L')
				show_images2(game, x, y);
			y++;
		}
		x++;
	}
}
