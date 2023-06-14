/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:18:10 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/30 22:35:45 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_error(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n' && line[i + 1] == '\n')
		{
			write(1, "ERROR: SLESH N!\n", 16);
			exit(0);
		}
		else
			i++;
	}
}

void	ft_check_cep(char *line)
{
	int	i;
	int	p;
	int	e;
	int	c;

	i = 0;
	p = 0;
	e = 0;
	c = 0;
	while (line[i] != '\0')
	{
		if (line[i] == 'P')
			p++;
		else if (line[i] == 'E')
			e++;
		else if (line[i] == 'C')
			c++;
		i++;
	}
	if (p != 1 || e != 1 || c == 0)
	{
		write(1, "ERROR: MORE OR LESS ICON!\n", 26);
		exit(0);
	}
}

void	ft_line_error(char **map)
{
	int		i;
	size_t	siz;

	i = 0;
	siz = 0;
	siz = ft_strlen(map[i]);
	while (map[i])
	{
		if (siz != ft_strlen(map[i]))
		{
			write(1, "ERROR: SIZE!\n", 13);
			exit(0);
		}
		else
		i++;
	}
}
