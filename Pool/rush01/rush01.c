/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:52:52 by amouhoub          #+#    #+#             */
/*   Updated: 2022/06/13 14:52:54 by amouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar4(char a, char b, char c, int x)
{
    int i;

    i = 1;
    while (i < x)
    {
        if (i == 1)
            ft_putchar(a);
        else if (i == x )
            ft_putchar(c);
        else
            ft_putchar(b);
        i++;
    }
}

void    rush(int x, int y)
{
    int j;

    j = 1;
    while (j < y)
    {
        if (j == 1)
            ft_putchar4('/', '*', '\\', x);
        else if  (j == y )
            ft_putchar4('\\', '*', '/', x);
        else        
            ft_putchar4('*', ' ', '*', x);
            ft_putchar('\n');
        j++;
    }
}
