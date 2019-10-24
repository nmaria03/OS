#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <printf.h>
#include <dirent.h>
#include <stdbool.h>

int main() {
    DIR *temp = opendir("tmp");
    struct dirent *dp;
    int size = 0;
    while ((dp = readdir(temp)) != NULL) {
        size++;
    }
    closedir(temp);
    temp = opendir("tmp");
    struct dirent **array = malloc(size * sizeof(struct dirent));
    bool a[size];
    int number = 0;
    while ((dp = readdir(temp)) != NULL) {
        array[number++] = dp;
        a[number] = false;
    }
    for (int i = 0; i < size; i++) {
        if (a[i])
            continue;

        a[i] = true;
        int count = 1;
        for (int j = i; j < size; j++) {
            if (array[j]->d_ino == array[i]->d_ino && !a[j]) {
                printf("%s, ", array[j]->d_name);
                a[j] = true;
                count++;
            }
        }
        if (count > 1) {
            printf("%s -> ", array[i]->d_name);
            printf("%llu \n", array[i]->d_ino);
        }
    }
    return 0;
}
