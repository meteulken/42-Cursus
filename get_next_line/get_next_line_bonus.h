#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_read_and_create(int fd, char *str);
char	*ft_create(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *string, char *buff);
int		ft_strchr(char *str);
#endif