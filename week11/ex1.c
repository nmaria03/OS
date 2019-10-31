#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

int main() {
	int file = open("ex1.txt", O_RDWR);
	char *string = "This is a nice day";
    struct stat my_stat;
    stat("ex1.txt", &my_stat);	
    char *my_mmap = mmap(NULL, my_stat.st_size, PROT_WRITE|PROT_READ, MAP_SHARED, file, 0);

    memcpy(my_mmap, string, strlen(string));
    ftruncate(file, strlen(string));
    msync(my_mmap, strlen(string), MS_SYNC);
    munmap(my_mmap, strlen(string));
    close(file);

}