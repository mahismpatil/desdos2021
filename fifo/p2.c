#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 64
// P2
int main(int argc, char const *argv[])
{
    int fd;
    unsigned char buff[SIZE];

    fd = open("desdfifo", O_RDONLY);
    read(fd, buff, 64);
    printf("P2: got data %s from P1\n", buff);
    close(fd);
    return 0;
}
