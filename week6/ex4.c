#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <zconf.h>
#include <signal.h>

void signkill(int n) {
    printf("Kill signal\n");
}
void signstop(int n) {
    printf("Stop signal\n");
}
void signusr1(int n) {
    printf("USR1 signal\n");
}

int main() {
    signal(SIGKILL, signkill);
    signal(SIGSTOP, signstop);
    signal(SIGUSR1, signusr1);
}
