#include "test.h"

static int	result(char *s1 ,char *s2)
{
	if (strcmp(s1, s2) == 0)
		SUCCESS;
	else
		FAIL;
	return (0);
}

static int	basic_test(void)
{
	char		str[SIZE];
	char		str2[SIZE];
	char		*ptr;
	char		*ptr2;

	printf("basic test\n");
	strcpy(str, "bonjour");
	strcpy(str2, "bonjour");
	ptr = ft_strcat(str, " les gens");
	ptr2 = strcat(str2, " les gens");
	result(str, str2);
	printf("test return\n");
	result(ptr, ptr2);
	return (0);
}

int			test_strcat(void)
{
	TEST("FT_STRCAT");
	basic_test();
	return (0);
}