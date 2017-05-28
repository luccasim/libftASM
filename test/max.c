/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:25:29 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:25:31 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	basic_test(int nb, int min, int max)
{
	int		ret;

	printf("TEST %d\n", nb);
	ret = ft_max(min, max);
	if (ret == max)
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_max(void)
{
	TEST("FT_MAX");
	basic_test(1, 4, 8);
	basic_test(2, -4, 8);
	basic_test(3, 0, 0);
	return (0);
}
