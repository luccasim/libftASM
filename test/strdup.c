/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:26:20 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:26:21 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	result(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		SUCCESS;
	else
		FAIL;
	return (0);
}

static int	basic_test(int n, char *s)
{
	char	*s1;
	char	*s2;

	printf("TEST %d, de '%s'\n", n, s);
	s1 = ft_strdup(s);
	s2 = ft_strdup(s);
	result(s1, s2);
	free(s1);
	free(s2);
	return (0);
}

int			test_strdup(void)
{
	TEST("FT_STRDUP");
	basic_test(1, "Bonjour les gens!");
	basic_test(2, "");
	return (0);
}
