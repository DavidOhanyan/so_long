/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:21:22 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/29 21:47:08 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_memcpy(char	*dst, char *src, size_t n)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*dub;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dub = malloc(sizeof(char) * len);
	if (!dub)
		return (NULL);
	dub = ft_memcpy(dub, s1, len);
	return (dub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
