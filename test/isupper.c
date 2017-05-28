#include "test.h"

static int	test_char(int nb, int c)
{
	printf("TEST %d '%c'\n", nb, c);
	if ((ft_isupper(c)) == (isupper(c)))
		SUCCESS;
	else
		FAIL;
	return (0);
}

int			test_isupper(void)
{
	TEST("FT_ISUPPER");
	test_char(1, 't');
	test_char(2, 'K');
	test_char(3, 3);
	test_char(4, '9');
	test_char(5, '+');
	return (0);
}