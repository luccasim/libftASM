/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:21:21 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:21:23 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	basic_test(void)
{
	int		fd;

	fd = open("auteur", O_RDONLY);
	if (fd)
	{
		ft_cat(fd);
		SUCCESS;
	}
	close(fd);
	return (0);
}

int			test_cat(void)
{
	TEST("FT_CAT");
	basic_test();
	return (0);
}
