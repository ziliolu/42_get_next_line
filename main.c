#include "get_next_line.h"

int main()
{
    int fd;

    char *ptr;
    fd = open("text.txt", O_RDONLY);
    ptr = get_next_line(fd);
    printf("%s", ptr);
    free(ptr);

    ptr = get_next_line(fd);
    printf("%s", ptr);
    free(ptr);

    ptr = get_next_line(fd);
    printf("%s", ptr);
    free(ptr);
}