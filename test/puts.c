#include "test.h"

static int		basic_test(int nb, char *s)
{
	int		ret;
	int		ret2;

	printf("TEST %d\n", nb);
	ret = ft_puts(s);
	ret2 = puts(s);
	RESULT(ret != ret2);
	return (0);
}

int				test_puts(void)
{
	TEST("FT_PUTS");
	basic_test(1, "Bonjour les gens");
	basic_test(2, "");
	basic_test(3, 0);
	return (0);
}