#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 40
# endif

char *get_next_line(int fd);

#endif