/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjm <bjm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:22:34 by bjm               #+#    #+#             */
/*   Updated: 2022/02/06 21:40:47 by bjm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_get_new_line(int fd)
{
	int 		i;
	char 		buffer[BUFFER_SIZE + 1];
	
	char		*newline=NULL;
	i = 1;
	while(i > 0 && !ft_strchr(newline, '\n'))
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i] = '\0';
		if (i == -1)
			return (NULL);
		newline = ft_strjoin(newline, buffer);
	if (newline[0] == 0)
	{
		free (newline);
		return (NULL);
	}
	}
	return (newline);
}

char	*ft_selectbeforenl(char *newline)
{
	int		i;
	char	*ret;
	
	i = 0;
	while (newline[i] != '\n')
		i++; 
	ret = malloc(sizeof(char) * i + 2);
	i = 0;
	while (newline[i] != '\n')
	{
		ret[i] = newline[i];
		i++;
	}
	ret[i] = '\n';
	ret[i + 1] = '\0';
	return (ret);
}
char	*ft_selectafternl(char *s1)
{
	int	i;
	int j;
	char *test;
	
	i = 0;
	j = 0;
	while (s1[i] != '\n')
		i++;
	i++;
	test = malloc(sizeof(char) * (ft_strlen(s1) - i + 1));
	while (s1[i])
		test[j++] = s1[i++];
	test[j] = '\0';
	return (test);
}
char	*get_next_line(int fd)
{
	static char	*newline;
	char		*ret=NULL;
	char 		*test=NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ret = ft_get_new_line(fd);
	test = ft_strjoin(newline, ret);
	free (ret);
	if (ft_strchr(test, '\n'))
	{
		ret = ft_selectbeforenl(test);
		newline = ft_selectafternl(test);
	}
	if (!newline && !test)
		return (NULL);
	if (!ft_strchr(test, '\n'))
	{
		ret = ft_strdup(test);
		free (test);
		newline = NULL;
		if (ret[0] == 0)
		{
			free (ret);
			return (NULL);
		}
		return (ret);
	}
	if (ret[0] == 0)
		return (NULL);
	free (test);
	return (ret);
}
int main(void)
{
	int	i;
	int fd;
	i = 30;
	FILE *f;
	f = fopen("test.txt", "r");
	fd = fileno(f);
	
	while (i > 0)
	{
		printf("%s-", get_next_line(fd));
		i--;
	}
	i = 30;
}