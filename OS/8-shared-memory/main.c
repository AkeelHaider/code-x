#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/wait.h>

int main() {
    int sid = shmget((key_t)100,100,IPC_CREAT|0666);
   
    char* shmLocation = shmat(sid,0,0);
    printf("Shared Memory is Present at: %d \n",sid);

    int pid = fork();
    if(pid == 0) {
        printf("Sending MSG from Child... \n");
        strcpy(shmLocation,"Hello World...");
    }else {
        wait(0);
        char res[100];
        strcpy(res,shmLocation);
        printf("Message received from Child: %s \n",res);
    }

    return 0;
}
