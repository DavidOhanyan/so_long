/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:06:32 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 18:29:52 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_game *game, char **test_map, char *line)
{
	game->image.for_exit = 0;
	game->image.for_player = 0;
	game->map = 0;
	game->step = 0;
	game->image.for_coin = 0;
	game->count_move = 0;
	game->player = player_posign(test_map);
	game->rem = player_posign(test_map);
	game->mlx.screen = ft_map_size(test_map);
	flood_fill(test_map, game->mlx.screen, game->player);
	check_from_flood(test_map);
	game->map = ft_split(line, '\n');
	free(line);
	ft_free(test_map, game->mlx.screen.y);
	game->image.score = count_coins(game->map);
	game->mlx.ptr = mlx_init();
	game->mlx.win = mlx_new_window(game->mlx.ptr,
			game->mlx.screen.x * LENGHT, game->mlx.screen.y * WIDTH, "so_long");
	fill_image(game);
}
