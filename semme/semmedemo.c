#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

int count = 0; // shared resource
sem_t sem_count;

void *incThread(void *data)
{
    while (1)
    {
        sem_wait(&sem_count);
        count++;
        printf("Inc count: %d\n", count);
        sem_post(&sem_count);
    }
}

void *decThread(void *data)
{
    while (1)
    {
        sem_wait(&sem_count);
        count--;
        printf("Dec count: %d\n", count);
        sem_post(&sem_count);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t incId, decId;

    sem_init(&sem_count, 0, 1);
    pthread_create(&incId, NULL, incThread, NULL);
    pthread_create(&decId, NULL, decThread, NULL);
    pthread_join(incId, NULL);
    pthread_join(decId, NULL);
    sem_destroy(&sem_count);
    return 0;
}
