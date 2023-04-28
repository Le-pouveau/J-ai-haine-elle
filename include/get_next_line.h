/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:03:21 by bgales            #+#    #+#             */
/*   Updated: 2023/04/28 17:54:07 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

/**
@brief Reads a line from a file descriptor and returns it as a string.
 *
@param fd The file descriptor to read from.
@return A string containing the next line from the file descriptor, or NULL if there is an error or there are no more lines to read.
 */
char *ft_get_new_line(int fd);

/**
@brief Returns a string containing all characters in a given string up to and including the first newline character.
 *
@param newline The string to search for a newline character.
@return A string containing all characters in the given string up to and including the first newline character, or NULL if there is an error.
 */
char *ft_selectbeforenl(char *newline);

/**
@brief Returns a string containing all characters in a given string after the first newline character.
 *
@param s1 The string to search for a newline character.
@return A string containing all characters in the given string after the first newline character, or NULL if there is an error.
 */
char *ft_selectafternl(char *s1);

/**
@brief Reads the next line from a file descriptor and returns it as a string.
 *
@param fd The file descriptor to read from.
@return A string containing the next line from the file descriptor, or NULL if there is an error or there are no more lines to read.
 */
char *get_next_line(int fd);

/**
@brief Returns the length of a given string.
 *
@param str The string to get the length of.
@return The length of the string.
 */
int ft_strlen(char *str);

/**
@brief Returns a duplicate of a given string.
 *
@param s1 The string to duplicate.
@return A duplicate of the given string, or NULL if there is an error.
 */
char *ft_strdup(char *s1);

/**
@brief Searches a string for a given character and returns 1 if it is found, 0 otherwise.
 *
@param s1 The string to search.
@param c The character to search for.
@return 1 if the character is found in the string, 0 otherwise.
 */
int ft_strchr(char *s1, int c);

/**
@brief Concatenates two strings and returns the result.
 *
@param s1 The first string to concatenate.
@param s2 The second string to concatenate.
@return The concatenated string, or NULL if there is an error.
 */
char *ft_strjoin(char *s1, char *s2);

#endif
