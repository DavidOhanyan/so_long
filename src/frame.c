/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:58:36 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 18:01:12 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*change_rem(t_game *game)
{
	static int	i = 0;
	static void	*rem = 0;

	if (!rem)
		rem = game->image.coin;
	if (i % 50 == 0)
		rem = game->image.coin;
	if (i % 100 == 0)
		rem = game->image.coin2;
	++i;
	return (rem);
}

int	frame(t_game *game)
{
	void	*rem;

	rem = change_rem(game);
	mlx_clear_window(game->mlx.ptr, game->mlx.win);
	show_images(game, rem);
	count_steps(game);
	return (0);
}
