#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <ctype.h>

# include "libfts.h"

# define SIZE		32
# define TEST(a)	printf("----------# %s #----------\n", a);
# define RESULT(a)	(a) ? SUCCESS : FAIL
# define SUCCESS	printf("\033[32;1m%s\n\033[0m", "SUCCESS")
# define FAIL		printf("\033[31;1m%s\n\033[0m", "FAIL")

/*
** PART 1
*/

int			test_bzero(void);
int			test_strcat(void);
int			test_isalpha(void);
int			test_isdigit(void);
int			test_isalnum(void);
int			test_isascii(void);
int			test_isprint(void);
int			test_tolower(void);
int			test_toupper(void);
int			test_puts(void);

/*
** PART 2
*/

int			test_strlen(void);
int			test_strdup(void);
int			test_memcpy(void);
int			test_memset(void);

/*
** PART 3
*/

int			test_cat(void);

/*
** BONUS
*/

int			test_islower(void);
int			test_isupper(void);
int			test_abs(void);
int			test_min(void);
int			test_max(void);

#endif