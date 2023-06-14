/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:00:09 by dohanyan          #+#    #+#             */
/*   Updated: 2023/04/04 18:54:49 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_steps(t_game *game)
{
	//if (game->rem.x == game->player.x && game->rem.y == game->player.y)
	//{
		game->step = ft_itoa(game->count_move);
		mlx_string_put(game->mlx.ptr, game->mlx.win,14, 7, 0x000000, game->step);
		free(game->step);
	//}
	//else
	//{
	//	game->step = ft_itoa(game->count_move);
	//	mlx_string_put(game->mlx.ptr, game->mlx.win,14, 7, 0x000000, game->step);
	//	free(game->step);
	//}
}
