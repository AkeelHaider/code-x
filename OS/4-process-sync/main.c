#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();
    if(pid == 0) {
        printf("Chid PTD => %d \n", getpid());
        int pid2 = fork();
        if(pid2 == 0) {
            wait(0);
            printf("Child2 PID => %d \n", getpid());
        }
    }else {
        int pidc = wait(0);
        int pidcs = wait(0);
        printf("Child with pid %d finished!!! \n", pidc);
        printf("Child with pid %d finished!!! \n", pidcs);
    }

    return 0;
}