#include <stdio.h>
#include <pthread.h>

int event=0;
pthread_mutex_t eventMutex;
pthread_cond_t eventCV;

void * check_event(void * data)
{
    printf("CE: Grabbing mutex\n");
    pthread_mutex_lock(&eventMutex);
    printf("CE: Checking event\n");
    while(event != 1) {
        pthread_cond_wait(&eventCV, &eventMutex);
    }
    printf("CE: Event is set\n");
    pthread_mutex_unlock(&eventMutex);
    printf("CE: Unlocking the mutex\n");
}

void * fire_event(void * data)
{
    printf("FE: Grabbing mutex\n");
    pthread_mutex_lock(&eventMutex);
    printf("FE: setting the event\n");
    event=1;
    pthread_mutex_unlock(&eventMutex);  
    printf("FE: Unlocking the mutex\n");  
    pthread_cond_signal(&eventCV);
}


int main(int argc, char const *argv[])
{
    pthread_t cid, fid;
    pthread_cond_init(&eventCV, NULL);
    pthread_create(&cid, NULL, check_event, NULL);
    pthread_create(&fid, NULL, fire_event, NULL);
    pthread_join(cid, NULL);
    pthread_join(fid, NULL);
    return 0;
}
