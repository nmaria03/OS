#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *random = fopen("/dev/random", "r");

    FILE *out = fopen("ex1.txt", "w+");

    char str[20];
    fgets(str, 20, random);
    fputs(str, out);

    fclose(random);
    fclose(out);
    return 0;
}