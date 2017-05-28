#ifndef LIBFTS_H
# define LIBFTS_H

# include <unistd.h>

/*
** PART 1
*/

void		ft_bzero(void *ptr, size_t n);
char		*ft_strcat(char *s1, char *s2);
int			ft_isalpha(int a);
int			ft_isdigit(int a);
int			ft_isalnum(int a);
int			ft_isascii(int a);
int			ft_isprint(int a);
int			ft_tolower(int a);
int			ft_toupper(int a);
void		ft_puts(char const *str);

/*
** PART 2
*/

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
void		*ft_memcpy(void *dst, void *src, size_t n);
void		*ft_memset(void *dst, int c, size_t len);

/*
** PART 3
*/

void		ft_cat(int fd);

/*
** BONUS
*/

int			ft_islower(int a);
int			ft_isupper(int a);
int			ft_min(int a, int b);
int			ft_max(int a, int b);
int			ft_abs(int a);

#endif