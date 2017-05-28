#include "test.h"

static int	basic_test(void)
{
	int		fd;

	fd = open("auteur", O_RDONLY);
	if (fd)
	{
		ft_cat(fd);
		SUCCESS;
	}
	close(fd);
	return (0);
}

int			test_cat(void)
{
	TEST("FT_CAT");
	basic_test();
	return (0);
}