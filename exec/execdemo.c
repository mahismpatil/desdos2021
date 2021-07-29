#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("Before exec\n");
    execl("/mahi/desd/os/arith/main", "/mahi/desd/os/arith/main", NULL);
    printf("After exec\n");
    return 0;
}
