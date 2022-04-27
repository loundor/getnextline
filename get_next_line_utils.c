/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:30:40 by stissera          #+#    #+#             */
/*   Updated: 2022/03/11 20:58:06 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

size_t	ft_strlen(char *s1)
{
	size_t	ret;

	if (!s1)
		return (0);
	ret = 0;
	while (*s1)
	{
		ret++;
		s1++;
	}
	return (ret);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		len[2];
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	len[0] = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * (len[0] + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	i = -1;
	if (s1)
		while (s1[++i])
			ret[i] = s1[i];
	i = -1;
	if (s2)
	{
		while (s2[++i])
		{
			ret[len[0]] = s2[i];
			len[0]++;
		}
	}
	ret[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ret);
}

int	ft_strchr(char *str, char set)
{
	if (!str || !set)
		return (0);
	while (*str)
	{
		if (*str == set)
			return (1);
		str++;
	}
	return (0);
}
