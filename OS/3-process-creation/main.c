#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid = fork();
    if(pid == 0) {
        printf("Child => PID: %d, ParentPID: %d \n",getpid(),getppid());
    }else {
        printf("Parent => PID: %d, ParentPID: %d \n",getpid(),getppid());
    }

    return 0;
}