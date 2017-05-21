#include "libfts.h"
#include <string.h>
#include <stdio.h>

int			test

int			test_bzero(void)
{
	char	str[32];
	char	str2[32];

	strcpy(str, "bonjour");
	strcpy(str2, "bonjour");
	ft_bzero(str, 32);
	bzero(str2, 32);
	if (strcmp(str, str2) == 0)
		printf("bzero success\n");
	else
		printf("bzero:\nyour %s\nour %s\n", str, str2);
	return (0);
}

int			main(void)
{
	test_bzero();
	return (0);
}