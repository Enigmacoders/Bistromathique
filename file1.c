/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 20:47:56 by sdube             #+#    #+#             */
/*   Updated: 2016/04/29 13:48:23 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_entrance(char *str, char *map, char *strlen, char *strwid)
{
	int	i;
	int len;
	int	length;
	int	width;

	i = 0;
	len = ft_strlen(str);
	if (len != '\n')
	{
		printf("%s", map);
		printf("%i", len);
		printf("\n");
		width = ft_atoi(strlen);
		length = ft_atoi(strwid);
		printf("%i", length);
	}
	else
		write(1, "MAP ERROR", 9);
}

void	ft_extract(char *map)
{
	char	*val;
	int		i;

	i = 1;
	printf("%s", map);
	while(map[i] != '\n')
	{
		val[i] = map[i];
		i++;
	}
		printf("%s", &val[0]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int rd;
		char buf[2400];

		rd = open(argv[1], O_RDONLY);
		if (rd == -1)
		{
			write (1, "file failed to open and read", 20);
			exit(1);
		}
		read(rd, buf, 4096);
		buf[2399] = '\0';

		ft_extract(buf);

		ft_entrance(argv[4], buf, argv[2], argv[3]);
		close(rd);
	}
	return (0);
}
