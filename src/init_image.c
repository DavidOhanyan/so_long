/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:09:32 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 17:51:52 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_image(t_game *game)
{
	game->image.coin = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/coin.xpm", &game->image.len, &game->image.wit);
	game->image.coin2 = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/coin2.xpm", &game->image.len, &game->image.wit);
	game->image.enamy = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/enamy.xpm", &game->image.len, &game->image.wit);
	game->image.exit = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/exit.xpm", &game->image.len, &game->image.wit);
	game->image.exit2 = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/exit2.xpm", &game->image.len, &game->image.wit);
	game->image.floor = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/xot.xpm", &game->image.len, &game->image.wit);
	game->image.wall = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/Rock.xpm", &game->image.len, &game->image.wit);
	game->image.player = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/player.xpm", &game->image.len, &game->image.wit);
	game->image.player2 = mlx_xpm_file_to_image(game->mlx.ptr,
			"./images/player2.xpm", &game->image.len, &game->image.wit);
}
