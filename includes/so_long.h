/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:24:34 by dohanyan          #+#    #+#             */
/*   Updated: 2023/04/03 16:35:34 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include <stdio.h>
# include <mlx.h>

# define LENGHT 48
# define WIDTH 48
# define KEY_UP 13
# define KEY_DOWN 1
# define KEY_LEFT 0
# define KEY_RIGHT 2
# define KEY_ESC 53

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

typedef struct s_imige {
	int		score;
	int		wit;
	int		len;
	int		for_player;
	int		for_exit;
	int		for_coin;
	void	*player;
	void	*player2;
	void	*floor;
	void	*wall;
	void	*coin;
	void	*coin2;
	void	*enamy;
	void	*exit;
	void	*exit2;
}		t_imige;

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
	t_point	screen;
}	t_mlx;

typedef struct s_game
{
	t_mlx	mlx;
	t_point	player;
	t_point	rem;
	int		count_move;
	char	*step;
	char	**map;
	t_imige	image;
}		t_game;

char	*ft_strrchr(char *str, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_free(char	**matrix, int j);
size_t	qanak(char const	*s, char c);
char	**ft_allocate_matrix(char const	*s, char c);
char	**ft_fill_matrix(char const	*s, char c, char	**res);
char	**ft_split(char const	*s, char c);
void	*ft_memcpy(char	*dst, char *src, size_t n);
char	*ft_strdup(char *s1);
char	*ft_strtrim(char *s1, char *set);
void	ft_check_error(char *line);
void	ft_check_cep(char *line);
int		ft_width_map(char **map);
void	ft_num_error1(char **map);
void	ft_num_error2(char **map);
void	ft_num_error3(char **map);
t_point	player_posign(char **map);
t_point	ft_map_size(char **map);
void	flood_fill(char **map, t_point size_map, t_point pos);
void	fill(char **map, t_point size_map, t_point pos, char player);
void	check_from_flood(char **map);
int		count_coins(char **map);
void	fill_image(t_game *game);
void	show_images(t_game *game, void *rem);
void	init_game(t_game *game, char **test_map, char *line);
int		keypress(int keycode, t_game *game);
void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);
void	game_clean(t_game *game, int win_lose);
int		ft_close(t_game *game);
int		digit_count(int n);
char	*zerocase(char *m);
char	*ft_itoa(int nbr);
void	count_steps(t_game *game);
char	*check_argv(char *argv);
void	parce(t_game *game, char **test_map, char *line);
void	for_hooks(t_game *game);
void	ft_line_error(char **map);
int		frame(t_game *game);
void	show_images2(t_game *game, int x, int y);
void	show_images3(t_game *game, int x, int y, void *rem);
void	*change_rem(t_game *game);

#endif