/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:26:31 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:26:32 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	basic_test(int n, char *s)
{
	printf("TEST %d, de '%s'\n", n, s);
	if (ft_strlen(s) == strlen(s))
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_strlen(void)
{
	TEST("FT_STRLEN");
	basic_test(1, "Bonjour les gens!");
	basic_test(2, "");
	return (0);
}
