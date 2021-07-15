#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

#define SIZE 64

int main(int argc, char const *argv[])
{
    unsigned char buff[SIZE];
    unsigned char buff1[SIZE];
    int pfd[2];
    int pfdr[2];
    pid_t id;

    pipe(pfd);
    pipe(pfdr);
    id = fork();

    if (0 == id)
    {
        printf("Child\n");
        close(pfd[1]);            // close wirting end
        read(pfd[0], buff, SIZE); // read data from reading end
        printf("Child: got data: %s\n", buff);
        close(pfd[0]);
        // reply
        close(pfdr[0]);
        write(pfdr[1], "OK\n", 3); // write data in writing end
        close(pfdr[1]);
    }
    else
    {
        printf("Parent\n");
        close(pfd[0]);              // close reading end
        write(pfd[1], "DESD\n", 5); // write data in writing end
        close(pfd[1]);
        // print response
        close(pfdr[1]);             // close wirting end
        read(pfdr[0], buff1, SIZE); // read data from reading end
        printf("Parent: got data: %s\n", buff1);
        close(pfdr[0]);
    }

    return 0;
}
