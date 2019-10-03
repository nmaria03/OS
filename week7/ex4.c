#include <stdio.h>
#include <stdlib.h>

void* my_realloc(void* ptr, int n) {
    if (ptr == NULL) {
        ptr = malloc(n);
        return ptr;
    }
    else if (n == 0) {
        free(ptr);
    }
    else {
        free(ptr);
        ptr = malloc(n);
        return ptr;
    }
    
}

int main() {
    int *arr = malloc(5);
    for (int i = 0; i < 5; i++) {
        arr[i] = 1;
        printf("%d ", arr[i]);
    }
    my_realloc(arr, 10);
    for (int i = 0; i < 10; i++) {
        arr[i] = 2;
        printf("%d ", arr[i]);
    }
}