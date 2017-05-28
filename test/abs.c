#include "test.h"

static int	basic_test(int nb, int n)
{
	printf("TEST %d, of '%d'\n", nb, n);
	if (ft_abs(n) == abs(n))
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_abs(void)
{
	TEST("FT_ABS");
	basic_test(1, 4);
	basic_test(2, -4);
	basic_test(3, 0);
	return (0);
}