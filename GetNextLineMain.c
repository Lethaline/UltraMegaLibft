/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:07:18 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/11 15:08:19 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"
#include "stdio.h"
#include "fcntl.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*str;

	(void)argc;
	i = 1;
	fd = open(argv[1], O_RDONLY);
	while (i != 0)
	{
		str = get_next_line(fd);
		if (!str)
			i = 0;
		else
			printf("%s", str);
	}
	close(fd);
	return (0);
}
