#include "test.h"

static int		result(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		printf("SUCCESS\n");
	else
		printf("FAIL\n");
	return (0);
}

static int		basic_test(int n, char *c)
{
	char		str[SIZE];
	char		str2[SIZE];

	printf("TEST %d de '%s'\n", n, c);
	ft_memcpy(str, c, SIZE);
	memcpy(str2, c, SIZE);
	result(str, str2);
	return (0);
}

int				test_memcpy(void)
{
	TEST("FT_MEMCPY");
	basic_test(1, "Salut les gens ce test");
	basic_test(2, "");
	return (0);
}