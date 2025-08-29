/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francima <francima@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:55:05 by francima          #+#    #+#             */
/*   Updated: 2025/08/29 13:01:57 by francima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char c, const char *delim)
{
	int	i;

	i = 0;
	while (delim[i])
	{
		if (delim[i++] == c)
			return (1);
	}
	return (0);
}

static char	*skip_delimiters(char *str, const char *delim)
{
	while (*str && is_delimiter(*str, delim))
		str++;
	return (str);
}

static char	*find_token_end(char *str, const char *delim)
{
	while (!is_delimiter(*str, delim) && *str)
		str++;
	return (str);
}

char	*ft_strtok(char *str, const char *delim)
{
	static char	*saved_ptr;
	char		*token_start;
	char		*token_end;

	if (NULL != str)
		saved_ptr = str;
	else if (NULL == saved_ptr)
		return (NULL);
	token_start = skip_delimiters(saved_ptr, delim);
	if ('\0' == *token_start)
	{
		saved_ptr = NULL;
		return (NULL);
	}
	token_end = find_token_end(token_start, delim);
	if (0 != *token_end)
	{
		saved_ptr = token_end + 1;
		*token_end = 0;
	}
	else
		saved_ptr = NULL;
	return (token_start);
}
