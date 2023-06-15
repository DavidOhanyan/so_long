/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:17:25 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 18:27:14 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*check_argv(char *argv)
{
	int		fd;
	char	*line;
	char	*for_get;

	if (ft_strcmp(ft_strrchr(argv, '.'), ".ber") != 0)
	{
		write(1, "ERROR: FILE INCORECT!\n", 22);
		exit(0);
	}
	fd = open(argv, O_RDONLY);
	while (1)
	{
		if (fd == -1)
		{
			write(1, "ERROR: INVALID FIEL!\n", 21);
			exit(0);
		}
		for_get = get_next_line(fd);
		if (for_get == NULL)
			break ;
		line = (ft_strjoin(line, for_get));
		free(for_get);
	}
	close(fd);
	return (line);
}

int	ft_close(t_game *game)
{
	game_clean(game, 3);
	return (0);
}

void	parce(t_game *game, char **test_map, char *line)
{
	line = ft_strtrim(line, "\n");
	ft_check_error(line);
	ft_check_cep(line);
	test_map = ft_split(line, '\n');
	ft_line_error(test_map);
	ft_num_error1(test_map);
	ft_num_error2(test_map);
	ft_num_error3(test_map);
	init_game(game, test_map, line);
}

void	for_hooks(t_game *game)
{	
	mlx_hook(game->mlx.win, 2, 0, &keypress, game);
	mlx_loop_hook(game->mlx.ptr, &frame, game);
	mlx_hook(game->mlx.win, 17, 0, &ft_close, game);
	mlx_loop(game->mlx.ptr);
}
