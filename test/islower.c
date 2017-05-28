/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   islower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:24:55 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:24:57 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	test_char(int nb, int c)
{
	printf("TEST %d '%c'\n", nb, c);
	if ((ft_islower(c)) == (islower(c)))
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_islower(void)
{
	TEST("FT_ISLOWER");
	test_char(1, 't');
	test_char(2, 'K');
	test_char(3, 3);
	test_char(4, '9');
	test_char(5, '+');
	return (0);
}
