#include <stdio.h>
#include <pthread.h>

int a, b, sum;

void *input_thread(void *data)
{
    while (1)
    {
        scanf("%d", &a);
        scanf("%d", &b);
    }
}

void *proc_thread(void *data)
{
    while (1)
    {
        sum = a + b;
        printf("sum: %d\n", sum);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t input_tid, proc_tid;
    pthread_create(&input_tid, NULL, input_thread, NULL);
    pthread_create(&proc_tid, NULL, proc_thread, NULL);

    pthread_join(input_tid, NULL);
    pthread_join(proc_tid, NULL);
    return 0;
}
