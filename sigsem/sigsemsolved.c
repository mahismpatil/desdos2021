#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

int a, b, sum;
sem_t s1, s2;

void *input_thread(void *data)
{
    while (1)
    {
        sem_wait(&s1);
        scanf("%d", &a);
        scanf("%d", &b);
        sem_post(&s2);
    }
}

void *proc_thread(void *data)
{
    while (1)
    {
        sem_wait(&s2);
        sum = a + b;
        printf("sum: %d\n", sum);
        sem_post(&s1);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t input_tid, proc_tid;
    sem_init(&s1, 0, 1);
    sem_init(&s2, 0, 0);
    pthread_create(&input_tid, NULL, input_thread, NULL);
    pthread_create(&proc_tid, NULL, proc_thread, NULL);

    pthread_join(input_tid, NULL);
    pthread_join(proc_tid, NULL);
    return 0;
}
