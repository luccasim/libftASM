/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:27:32 by luccasim          #+#    #+#             */
/*   Updated: 2017/05/28 15:27:33 by luccasim         ###   ########.fr       */
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

static int	test_str(char *s)
{
	char	str[SIZE];
	char	s1[SIZE];
	char	s2[SIZE];
	int		i;

	printf("TEST '%s':\n", s);
	strcpy(str, s);
	i = 0;
	while (str[i])
	{
		s1[i] = ft_toupper(str[i]);
		s2[i] = toupper(str[i]);
		i++;
	}
	s1[i] = 0;
	s2[i] = 0;
	result(s1, s2);
	return (0);
}

int			test_toupper(void)
{
	TEST("FT_TOUPPER");
	test_str("BoNJouR LeS GenS dE #42\n");
	return (0);
}
