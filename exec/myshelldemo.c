#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    int cmd;

    printf("Menu\n");
    printf("1. Arith\n");
    printf("2. ls\n");

    scanf("%d", &cmd);

    id = fork();

    if (0 == id)
    {
        if (1 == cmd)
        {
            execl("/mahi/desd/os/arith/main", "/mahi/desd/os/arith/main", NULL);
        }
        else
        {
            execl("/bin/ls", "/bin/ls", "-a", "-l", NULL);
        }
    }
    else
    {
        printf("Parent: \n");
    }

    return 0;
}
