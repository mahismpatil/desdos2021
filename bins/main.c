#include <stdio.h>
#include "arith.h"

int z; // BSS

int main(int argc, char const *argv[])
{

    printf("Add: %d\n", add(10, 20));
    return 0;
}
