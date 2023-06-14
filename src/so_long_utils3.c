/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:19:25 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/29 21:57:04 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	char	*strim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_strchr(set, s1[j - 1]) != NULL)
		j--;
	strim = (char *)malloc(sizeof(char) * ((j - i) + 1));
	if (!strim)
		return (NULL);
	ft_memcpy(strim, s1 + i, (j - i));
	strim[j - i] = '\0';
	if (s1)
		free (s1);
	return (strim);
}

int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*zerocase(char *m)
{
	m = (char *)malloc(sizeof(char) * 2);
	m[0] = 0 + '0';
	m[1] = 0;
	return (m);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	val;

	p = NULL;
	if (n == 0)
		return (zerocase(p));
	len = digit_count(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	val = (long)n;
	if (val < 0)
	{
		p[0] = '-';
		val *= -1;
	}
	p[len] = '\0';
	len--;
	while (val != 0)
	{
		p[len--] = (val % 10) + '0';
		val /= 10;
	}
	return (p);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
