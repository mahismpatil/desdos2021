#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("DESDP\n");      // Library call
    write(1, "DESDW\n", 6); // System call
    return 0;
}
