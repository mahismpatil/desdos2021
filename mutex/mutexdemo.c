#include <stdio.h>
#include <pthread.h>

int count = 0; // shared resource
pthread_mutex_t mutex_count;

void *incThread(void *data)
{
    while (1)
    {
        // Entry CR
        pthread_mutex_lock(&mutex_count);
        count++;
        printf("Inc count: %d\n", count);
        // Exit CR
        pthread_mutex_unlock(&mutex_count);
    }
}

void *decThread(void *data)
{
    while (1)
    {
        // Entry CR
        pthread_mutex_lock(&mutex_count);
        count--;
        printf("Dec count: %d\n", count);
        // Exit CR
        pthread_mutex_unlock(&mutex_count);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t incId, decId;

    pthread_mutex_init(&mutex_count, NULL);
    pthread_create(&incId, NULL, incThread, NULL);
    pthread_create(&decId, NULL, decThread, NULL);
    pthread_join(incId, NULL);
    pthread_join(decId, NULL);
    pthread_mutex_destroy(&mutex_count);
    return 0;
}
