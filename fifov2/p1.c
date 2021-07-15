#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h> /* Definition of AT_* constants */
#include <sys/stat.h>

// P1
int main(int argc, char const *argv[])
{
    int fd;

    mkfifo("desdfifo", S_IRUSR | S_IWUSR);

    fd = open("desdfifo", O_WRONLY);
    write(fd, "DESD\n", 5);
    close(fd);
    return 0;
}
