#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <zconf.h>
#include <signal.h>

int main() {
    int f = fork();
    if(f == 0) {
        while(1) {
            printf("I'm alive\n");
            sleep(1);
        }
    }
    else {
        sleep(10);
        kill(0, SIGTERM);
    }
    return 0;
}
