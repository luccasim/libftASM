#include "test.h"

static int	basic_test(int n, char *s)
{
	printf("TEST %d, de '%s'\n", n, s);
	if (ft_strlen(s) == strlen(s))
		printf("SUCCESS\n");
	else
		printf("FAIL\n");
	return (0);
}

int		test_strlen(void)
{
	TEST("FT_STRLEN");
	basic_test(1, "Bonjour les gens!");
	basic_test(2, "");
	return (0);
}