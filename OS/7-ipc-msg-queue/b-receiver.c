#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/msg.h>

struct msgbuf {
    int mType;
    char mText[100];
} snd, rcv;

int main() {
    int mqid = msgget((key_t)100,IPC_CREAT|0666);

    printf("Waiting for message from Sender... \n");
    msgrcv(mqid,&rcv,100,0,0);
    printf("Received Message from Sender: %s \n", rcv.mText);
    
    printf("Sending Reply... \n");
    snd.mType = 1;
    strcpy(snd.mText,"Hello Sender... \n");
    msgsnd(mqid,&snd,100,0);

    return 0;
}