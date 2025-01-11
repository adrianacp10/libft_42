#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int             ft_atoi(const char *str);
void    *ft_bzero(void *dest, size_t count);
void    *ft_calloc(size_t count, size_t size);
char    **ft_split(char const *s, char c);
int             ft_isalnum(char c);
int             ft_isalpha(int c);
int             ft_isascii(int c);
int             ft_isdigit(int n);
int             ft_isprint(int c);
char    *ft_itoa(int n);
void    *ft_memchr(const void *s, int value_search, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t count);
void    *ft_memmove(void *dest, const void *src, size_t count);
void    *ft_memset(void *dest, int value, size_t count);
char    *ft_strchr(const char   *str, int c);
char    *ft_strdup(char *src);
char    *ft_strjoin(char const  *s1, char const *s2);
size_t  ft_strlcat(char *dest, const char *src, size_t  size);
size_t  ft_strlcpy(char *dest, const char *src, size_t  size);
int             ft_strlen(const char *str);
int             ft_strncmp(const char   *s1, const char *s2, size_t     n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strnstr(const char  *sbig, const char *slittle, size_t len);
char    *ft_strrchr(char *str, int c);
char    *ft_strtrim(char const  *s1, char const *set);
char    *ft_substr(char const   *s, unsigned int start, size_t  len);
int             ft_tolower(int c);
int             ft_toupper(int c);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char const        *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
