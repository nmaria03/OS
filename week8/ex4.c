#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/resource.h>
#include <sys/time.h>

int main()
{
    int n = 8*1024*1024*10;
    for (int i = 0; i < 10; i++)
    {
        memset(&n, 0, sizeof(n));
	struct rusage ex;
        getrusage(RUSAGE_SELF, &ex);
	printf("%lu\n", ex.ru_maxrss);
        sleep(1);
    }
    return 0;
}