#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <sched.h>


struct int_double
{
    int	a;
    double	b;
};

struct Args
{
    int *val;
    int tid;
    pthread_mutex_t *mut;
};

void *run(void *args)
{
    struct int_double *ab=(struct int_double*)args;
    sleep(3);
    fprintf(stderr, "%d %f\n", ab->a, ab->b);
    return NULL;
}

void *whil(void *args)
{
    struct Args *p=(struct Args *)args;

           pthread_mutex_lock(p->mut);
    for(int i=0; i <50; ++i)
    {
        fprintf(stderr,"%u: %d %d\n", p->tid, i, *p->val);
        ++(*p->val);
        pthread_mutex_unlock(p->mut);
        struct timespec t= {0,1000};
        nanosleep(&t,NULL);
    }
    return NULL;
}

int main()
{
//    struct int_double ab;
    int p=0;
//    ab.a=10;
    //  ab.b=10.10;
    pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
    pthread_t tid1;
    pthread_t tid2;
    struct Args arg1= {&p, 1, &mut}, arg2 = {&p, 2, &mut};


    if(pthread_create(&tid1, NULL,whil, &arg1))
    {
        fprintf(stderr, "Error!\n");
        return 1;
    }

    if(pthread_create(&tid2, NULL,whil, &arg2))
    {
        fprintf(stderr, "Error!\n");
        return 1;
    }
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);


    return 0;
}
