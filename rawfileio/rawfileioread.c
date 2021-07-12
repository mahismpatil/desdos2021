#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 64

int main(int argc, char const *argv[])
{
    int fd;
    ssize_t count;

    unsigned char buff[BUFF_SIZE];

    fd = open("desd.txt", O_RDONLY | O_CREAT, S_IRUSR | S_IWUSR);

    if (-1 == fd)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    count = read(fd, buff, BUFF_SIZE);
    printf("Read data from file: %s\n", buff);
    printf("Read data %d bytes from file\n", count);

    close(fd);

    exit(EXIT_SUCCESS);
}
