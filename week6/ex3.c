#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <zconf.h>
#include <signal.h>

void sign(int n) {
    if (n == SIGINT)
        printf("Interception");
}
int main() {
    signal(SIGINT, sign);
}
