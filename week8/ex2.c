#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int n = 8*1024*1024*8;
    for (int i = 0; i < 10; i++)
    {
        memset(&n, 0, sizeof(n));
        sleep(1);
    }

    return 0;
}