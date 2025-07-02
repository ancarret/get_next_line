/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarret <ancarret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:31:32 by ancarret          #+#    #+#             */
/*   Updated: 2025/02/02 16:57:37 by ancarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*get_next_line(int fd);
char		*get_line_buffer(char **buffer);
char		*read_to_buffer(char *buffer, int fd);
int			process_read(int *read_bytes, char *temp_buffer,
				char **buffer, int fd);

#endif