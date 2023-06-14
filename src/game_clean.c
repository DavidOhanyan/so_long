/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_clean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:35:08 by dohanyan          #+#    #+#             */
/*   Updated: 2023/05/16 17:58:22 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_clean(t_game *game, int win_lose)
{
	if (win_lose == 1)
		write(1, "YOU WIN!\n", 9);
	if (win_lose == 0)
		write(1, "YOU LOSE!\n", 10);
	mlx_destroy_image(game->mlx.ptr, game->image.coin);
	mlx_destroy_image(game->mlx.ptr, game->image.coin2);
	mlx_destroy_image(game->mlx.ptr, game->image.enamy);
	mlx_destroy_image(game->mlx.ptr, game->image.exit);
	mlx_destroy_image(game->mlx.ptr, game->image.exit2);
	mlx_destroy_image(game->mlx.ptr, game->image.floor);
	mlx_destroy_image(game->mlx.ptr, game->image.player);
	mlx_destroy_image(game->mlx.ptr, game->image.player2);
	mlx_destroy_image(game->mlx.ptr, game->image.wall);
	mlx_destroy_window(game->mlx.ptr, game->mlx.win);
	ft_free(game->map, game->mlx.screen.y);
	exit(0);
}
