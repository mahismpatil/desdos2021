#include <stdio.h>
#include <pthread.h>

int count = 0; // race condition

void *incThread(void *data)
{
    while (1)
    {
        count++;
        printf("Inc count: %d\n", count);
    }
}

void *decThread(void *data)
{
    while (1)
    {
        count--;
        printf("Dec count: %d\n", count);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t incId, decId;

    pthread_create(&incId, NULL, incThread, NULL);
    pthread_create(&decId, NULL, decThread, NULL);
    pthread_join(incId, NULL);
    pthread_join(decId, NULL);
    return 0;
}
