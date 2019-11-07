#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int append = 0;
    int file_count[argc];
    int count = 0;
    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i],"-a") == 0) {
            append = 1;
            file_count[i] = 0;
            count++;
        }
        else if (strcmp(argv[i], "./a.out") != 0) {
            file_count[i] = 1;
            count++;
        }
        else {
            file_count[i] = 0;
            count++;
        }
    }
    
    if (count == 0)
        exit(1);

    char str[1000];
    fgets(str, 1000, stdin);

    for (int i = 0; i < argc; i++) {
        if (file_count[i]) {
            FILE *file;
            if (append)
                file = fopen(argv[i], "a+");
            else
                file = fopen(argv[i], "w+");

            fputs(str, file);
        }
    }

    fputs(str, stdout);

    return 0;
}