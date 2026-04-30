/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:16 by angsanch          #+#    #+#             */
/*   Updated: 2026/04/30 02:05:55 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

static void	*memjoin_free(const void *m1, size_t s1, const void *m2, size_t s2)
{
	void	*result;

	result = my_memjoin(m1, s1, m2, s2);
	free((void *)m1);
	return (result);
}

static ssize_t	update(ssize_t value, ssize_t *dest)
{
	*dest = value;
	return (value);
}

static int	read_until_end_line(int fd, t_file_buffer *f)
{
	ssize_t	index;

	while (update(my_memchr_index(f->buffer, '\n', f->buff_len), &index) < 0)
	{
		if (f->buff_len > 0)
		{
			f->line = memjoin_free(f->line, f->len, f->buffer, f->buff_len);
			f->len += f->buff_len;
			f->buff_len = 0;
			if (f->line == NULL)
				return (0);
		}
		index = read(fd, f->buffer, BUFFER_SIZE);
		if (index <= 0)
			return (index == 0);
		f->buff_len = index;
	}
	f->line = memjoin_free(f->line, f->len, f->buffer, index + 1);
	f->len += index + 1;
	if (f->line == NULL)
		return (false);
	my_memmove(f->buffer, &f->buffer[index + 1], f->buff_len - index - 1);
	f->buff_len -= index + 1;
	return (true);
}

static char	*get_line(int fd, t_file_buffer *f)
{
	f->line = NULL;
	f->len = 0;
	if (!read_until_end_line(fd, f))
	{
		free(f->line);
		f->buff_len = 0;
		return (NULL);
	}
	if (f->len == 0)
		return (free(f->line), NULL);
	return (memjoin_free(f->line, f->len, "\0", 1));
}

char	*get_next_line(int fd)
{
	static t_file_buffer	files[OPEN_MAX] = {{}};

	if (fd < 0 || fd >= OPEN_MAX)
		return (NULL);
	return (get_line(fd, &files[fd + 1]));
}
