/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:24:08 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 18:13:44 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	*line;
	char	**test_map;
	t_game	game;

	test_map = NULL;
	line = NULL;
	if (argc == 2)
	{
		line = check_argv(argv[1]);
		if (line)
		{
			parce(&game, test_map, line);
			for_hooks(&game);
		}
		else
		{
			write(1, "file is empty!\n", 15);
			exit(0);
		}
	}
	else
	{
		write(1, "more or less arguments!\n", 24);
		exit(0);
	}
}
