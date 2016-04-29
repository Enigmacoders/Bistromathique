/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 09:17:08 by sdube             #+#    #+#             */
/*   Updated: 2016/04/29 12:58:22 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_strlen(char *str)
{
    int	i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

void	ft_putstr(char *str)
{
    int	i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int		ft_atoi(char *str)
{
    int	i;
    int	negative;
    int	num;
    
    i = 0;
    negative = 0;
    num = 0;
    while((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
          || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == 45)
        negative = 1;
    if ((str[i] == 45) || (str[i] == 43))
        i++;
    while(str[i] >= 48 && str[i] <= 57)
    {
        num *= 10;
        num += ((int)str[i] - 48);
        i++;
    }
    if (negative == 1)
        return (-num);
    else
        return (num);
}
