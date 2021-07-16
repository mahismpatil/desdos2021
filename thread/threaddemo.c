#include <stdio.h>
#include <pthread.h>

void *pressureThread(void *data)
{
    printf("In Thread\n");
}

int main(int argc, char const *argv[])
{
    pthread_t pr_tid;

    printf("Before thread creation\n");
    pthread_create(&pr_tid, NULL, pressureThread, NULL);
    printf("After thread creation\n");
    pthread_join(pr_tid, NULL);
    printf("Thread joined\n");
    return 0;
}
