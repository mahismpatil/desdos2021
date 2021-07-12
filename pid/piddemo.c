#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int a;
    pid_t id, ppid;
    id = getpid();
    ppid = getppid();
    printf("PID: %d\n", id);
    printf("PPID: %d\n", ppid);

    scanf("%d", &a);

    printf("After scanf\n");
    return 0;
}
