/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:35:14 by lolemmen          #+#    #+#             */
/*   Updated: 2022/07/25 10:12:58 by lolemmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

typedef struct s_args
{
	int	minus;
	int	plus;
	int	zero;
	int	dot;
	int	hashtag;
	int	space;
	int	width;
	int	star;
}	t_args;

// Arrays

size_t	ft_arraylen(const void *array);
void	ft_push_a(int *tab);
void	ft_push_b(int *tab);

// Chars

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
int		ft_toupper(int c);
int		ft_tolower(int c);

// ft_printf

int		ft_check_conversion(char c, t_args flags, va_list ap);
int		ft_is_flag(char c);
int		ft_is_conversion(char c);
char	*ft_convert_base_ul(unsigned long n, char *base);
char	*ft_convert_base(unsigned int n, char *base);
int		ft_convert_char(int c, t_args flags);
int		ft_convert_hexadecimal(unsigned int n, t_args flags, int maj);
int		ft_convert_int(int nb, t_args flags);
int		ft_convert_percent(t_args flags);
int		ft_convert_pointer(unsigned long n, t_args flags);
int		ft_convert_string(char *str, t_args flags);
int		ft_convert_unsigned_int(unsigned int n, t_args flags);
int		ft_define_width(int width, int len, int zero);
t_args	ft_flag_plus(t_args flags);
t_args	ft_flag_minus(t_args flags);
t_args	ft_flag_width(va_list ap, t_args flags);
t_args	ft_flag_isdigit(char c, t_args flags);
int		ft_flag_dot(char *format, int i, t_args *flags, va_list ap);
t_args	ft_init_flags(void);
int		ft_parse_flags(char *format, int i, t_args *flags, va_list ap);
int		ft_parsing(char *format, va_list ap);
int		ft_printf(const char *format, ...);

// Get_Next_Line

char	*get_next_line(int fd);

// Lists

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

// Memories

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

// Numbers

double	ft_atof(char *str);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
char	*ft_itoa(long n);
void	ft_putnbr_fd(int n, int fd);
char	*ft_utoa(unsigned int n);

// Strings

void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *str);
int		ft_putstrlen(char *str, int len);
char	**ft_split(char const *s, char c);
int		ft_str_is_alnum(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_ascii(char *str);
int		ft_str_is_blank(char *str);
int		ft_str_is_cntrl(char *str);
int		ft_str_is_graph(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_punct(char *str);
int		ft_str_is_space(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_xdigit(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strlowcase(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strpbrk(char *str, char *searchedChars);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtok(char *str, char *separators);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strupcase(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
