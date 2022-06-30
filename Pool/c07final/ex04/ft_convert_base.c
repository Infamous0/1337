/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:55:43 by maboulkh          #+#    #+#             */
/*   Updated: 2022/06/30 00:48:58 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str);
int	check_base(char *base, int size);
int	get_index(char c, char *base, int base_len);
int	ft_atoi_base(char *str, char *base);

char	*ft_putnbr_base(long int nbr, char *base, char *nchar, int *i)
{
	if (nbr < 0)
	{
		nchar[*i] = '-';
		*i += 1;
		nbr *= -1;
	}
	if (nbr > ft_strlen(base) -1)
	{
		ft_putnbr_base(nbr / ft_strlen(base), base, nchar, i);
		ft_putnbr_base(nbr % ft_strlen(base), base, nchar, i);
	}
	else
	{
		nchar[*i] = base[nbr];
		*i += 1;
	}
	return (nchar);
}

int	cal_rt_len(long int nmbr, int bto_len)
{
	int	n;

	n = 1;
	if (nmbr < 0)
		n++;
	if (nmbr < 0)
		nmbr *= -1;
	while (nmbr / bto_len > 0)
	{
		n++;
		nmbr = nmbr / bto_len;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*rt;
	long int	nmbr;
	int			bfrom_len;
	int			bto_len;
	int			i;

	bfrom_len = ft_strlen(base_from);
	bto_len = ft_strlen(base_to);
	if (check_base(base_from, bfrom_len) || check_base(base_to, bto_len))
		return (0);
	nmbr = ft_atoi_base(nbr, base_from);
	i = cal_rt_len(nmbr, bto_len);
	rt = malloc(sizeof(char) * i + 1);
	i = 0;
	ft_putnbr_base(nmbr, base_to, rt, &i);
	rt[i] = '\0';
	return (rt);
}
