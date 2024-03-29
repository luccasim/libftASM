/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:25:49 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:25:51 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int		result(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		SUCCESS;
	else
		FAIL;
	return (0);
}

static int		basic_test(int n, char c)
{
	char		str[SIZE];
	char		str2[SIZE];

	printf("TEST %d de '%c'\n", n, c);
	bzero(str, SIZE);
	bzero(str2, SIZE);
	ft_memset(str, c, SIZE - 1);
	memset(str2, c, SIZE - 1);
	result(str, str2);
	return (0);
}

int				test_memset(void)
{
	TEST("FT_MEMSET");
	basic_test(1, 'A');
	basic_test(2, '0');
	basic_test(3, 0);
	return (0);
}
