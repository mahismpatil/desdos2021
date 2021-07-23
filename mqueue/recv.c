#include <stdio.h>
#include <fcntl.h>    /* For O_* constants */
#include <sys/stat.h> /* For mode constants */
#include <mqueue.h>

mqd_t cdacmq;
struct mq_attr cdacmq_attr;
char buff[128];
int msg_prio;

int main(int argc, char const *argv[])
{
    cdacmq_attr.mq_flags = 0;
    cdacmq_attr.mq_maxmsg = 4;
    cdacmq_attr.mq_msgsize = 128;
    cdacmq_attr.mq_curmsgs = 0;

    cdacmq = mq_open("/cdacmq", O_RDONLY | O_CREAT, S_IRUSR | S_IWUSR, &cdacmq_attr);

    mq_receive(cdacmq, buff, 128, &msg_prio);
    printf("Reieved msg: %s\nMsg prio: %d\n", buff, msg_prio);

    mq_close(cdacmq);
    return 0;
}
