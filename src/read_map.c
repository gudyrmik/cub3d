/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:55:24 by anurmach          #+#    #+#             */
/*   Updated: 2026/11/07 16:49:23 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_extension(char	*s)
{
	size_t	len;

	len = ft_strlen(s);
	if (len < EXT_NUM)
		return (0);
	if (!ft_strncmp(&s[len - EXT_NUM], EXTENSION, EXT_NUM + 1))
		return (1);
	else
		return (0);
}

static size_t	add_buffer2(char	*dst, char const	*s, ssize_t bytes)
{
	ssize_t	i;

	if (!s)
		return (0);
	i = 0;
	while (i < bytes)
	{
		dst[i] = s[i];
		i++;
	}
	return (i);
}

static char	*add_buffer(char *s1, char *s2, ssize_t total, ssize_t bytes)
{
	ssize_t	i;
	char	*dst;

	dst = (char *) malloc((total + bytes + 1) * sizeof(char));
	if (!dst)
		return (free(s1), NULL);
	i = 0;
	i = add_buffer2(&dst[0], s1, total);
	i += add_buffer2(&dst[i], s2, bytes);
	dst[i] = '\0';
	free(s1);
	return (dst);
}

static char	*readmap2(int fd)
{
	ssize_t	bytes;
	ssize_t	total_bytes;
	char	buffer[SIZE + 1];
	char	*map;

	map = NULL;
	total_bytes = 0;
	while (1)
	{
		ft_memset(buffer, 0, SIZE + 1);
		bytes = read(fd, buffer, SIZE);
		if (bytes < 0)
			return (free(map), print_error(4), NULL);
		if (!bytes)
			break ;
		map = add_buffer(map, buffer, total_bytes, bytes);
		if (!map)
			return (print_error(5), NULL);
		total_bytes += bytes;
	}
	if (!map)
		return (ft_strdup(""));
	return (map);
}

char	*readmap(char	*file)
{
	int		fd;
	char	*map;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (print_error(3), NULL);
	map = readmap2(fd);
	close(fd);
	return (map);
}
