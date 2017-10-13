#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2]; //fd[0] => Read End, fd[1] => Write End
    pipe(fd);

    int pid = fork();
    if(pid == 0) {
        close(fd[0]);
        printf("Sending Message From Child..\n");
        write(fd[1],"Send from Child!!!",19);
    }else{ 
        close(fd[1]);
        char value[100];
        read(fd[0],value,100);
        printf("Received Message: %s \n", value);
    }

    return 0;
}