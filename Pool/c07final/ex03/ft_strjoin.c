/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:56:22 by maboulkh          #+#    #+#             */
/*   Updated: 2022/06/29 22:19:53 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	return (strlen);
}

int	get_str_size(int size, char **strs, char *sep)
{
	int		n;
	int		str_len;

	n = 0;
	str_len = 0;
	while (n < size)
	{
		str_len += ft_strlen(strs[n]);
		if (n < size - 1)
			str_len += ft_strlen(sep);
		n++;
	}
	return (str_len);
}

void	create_str(int size, char **strs, char *sep, char *copy)
{
	int		n;
	int		i;
	int		j;

	i = 0;
	n = 0;
	while (n < size)
	{
		j = 0;
		while (strs[n][j])
		{
			copy[i + j] = strs[n][j];
			j++;
		}
		i += j;
		j = 0;
		while (sep[j] && n < size - 1)
		{
			copy[i + j] = sep[j];
			j++;
		}
		i += j;
		n++;
	}
	copy[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*copy;

	copy = (char *)(malloc(sizeof(char) * get_str_size(size, strs, sep) + 1));
	if (copy == NULL)
		return (0);
	if (size == 0)
		return (copy);
	create_str(size, strs, sep, copy);
	return (copy);
}
