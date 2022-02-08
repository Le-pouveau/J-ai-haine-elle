/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjm <bjm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:03:21 by bgales            #+#    #+#             */
/*   Updated: 2022/02/08 17:19:40 by bjm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_selectafternl(char *s1);
char	*ft_selectbeforenl(char *newline);
int		ft_strchr(char *s1, int c);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_strlen(char *string);
char	*ft_strjoin(char *first, char *then);
char	*ft_strdup(char *s);
#endif
