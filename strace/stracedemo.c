#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int fd;

    fd = open("desd.txt", O_WRONLY, S_IRUSR | S_IWUSR);

    write(fd, "DESD W\n", 7);

    close(fd);

    exit(EXIT_SUCCESS);
}
