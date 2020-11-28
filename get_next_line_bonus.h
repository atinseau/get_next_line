#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

# define MAX_FD 65540

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>



int     get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char *s2);
void    *ft_memmove(void *dst, const void *src, size_t len);
int		ft_strlen(char *str);
int     pos_n(char *str);
int     last_line(char **line, char *str);

#endif