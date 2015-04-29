#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <time.h>

int main()
{
    fork();
    main();
    return 0;
}
