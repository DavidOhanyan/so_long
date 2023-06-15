/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:00:09 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/15 15:59:46 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_steps(t_game *game)
{
	if (game->rem.x == game->player.x && game->rem.y == game->player.y)
	{
		game->step = ft_itoa(game->count_move);
		mlx_string_put(game->mlx.ptr, game->mlx.win,
			24, 17, 0x000000, game->step);
		free(game->step);
	}
	else
	{
		game->step = ft_itoa(game->count_move);
		mlx_string_put(game->mlx.ptr, game->mlx.win,
			24, 17, 0x000000, game->step);
		free(game->step);
	}
}
