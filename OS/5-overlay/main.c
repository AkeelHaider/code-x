#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("This is main Process!!!");
    execl("hello","",NULL);
    return 0;
}