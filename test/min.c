/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:25:56 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:25:58 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	basic_test(int nb, int min, int max)
{
	int		ret;

	printf("TEST %d\n", nb);
	ret = ft_min(min, max);
	if (ret == min)
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_min(void)
{
	TEST("FT_MIN");
	basic_test(1, 4, 8);
	basic_test(2, -4, 8);
	basic_test(3, 0, 0);
	return (0);
}
