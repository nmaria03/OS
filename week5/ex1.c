#include <stdio.h>
#include <string.h>
#include <pthread.h>

void *func(int n) {
    printf("%d\n", n + 1);
    pthread_exit(NULL);
}

int main() {
    pthread_t th[10];
    for (int i = 0; i < 10; i++) {
        pthread_create(&th[i], NULL, func, (void*)i);
        printf("%s %d\n", "Thread number ", i + 1);
        pthread_join(th[i], NULL);
    }
    return 0;
}