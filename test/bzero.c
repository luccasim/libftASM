/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:21:11 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:21:13 by luccasim         ###   ########.fr       */
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

static int	size_zero(void)
{
	char	str[SIZE];
	char	str2[SIZE];

	printf("Size 0:\n");
	strcpy(str, "bonjour");
	strcpy(str2, "bonjour");
	ft_bzero(str, 0);
	bzero(str2, 0);
	result(str, str2);
	return (0);
}

static int	basic_test(void)
{
	char	str[32];
	char	str2[32];

	printf("Basic test:\n");
	strcpy(str, "bonjour");
	strcpy(str2, "bonjour");
	ft_bzero(str, 32);
	bzero(str2, 32);
	result(str, str2);
	return (0);
}

int			test_bzero(void)
{
	TEST("FT_BZERO");
	basic_test();
	size_zero();
	return (0);
}
