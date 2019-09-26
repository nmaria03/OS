#include <stdio.h>
#include <string.h>
#include <zconf.h>

int main() {
    int temp[2];
    pipe(temp);
    char str1 = "I am a string!";
    size = strlen(str1);
    char str2[size];
    int f = fork();
    if(f == 0) {
        write(temp[1], str1, size);
    }
    else {
        read(temp[0], str2, size);
        printf("%s", str2);
    }
}
