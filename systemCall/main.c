#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
char ** ptr;
void * thread(void *vargp);
void f1(int id,int id2);
int main(void)
{
    int i;
    pthread_t tid;
    char *msg[2]={
        "Hello from foo",
        "Hello form bar"
    };
    ptr=msg;
    for(i = 0 ; i<2; i++)
    {
        pthread_create(&tid,
                     NULL,
                     thread,
                     (void *)i);
    }
    pthread_exit(NULL);
    return 0;
}
void *thread(void *vargp)
{
    int myid=(int)vargp;
    static int svar= myid;
    f1(myid,svar);
    printf("[%d]: %s (svar=%d) \n",myid,ptr[myid],++svar);
}
void f1(int id,int id2)
{
    if(id==id2)
    {
        printf("somthing\n");
        
    }
    else{
        printf("somthing else \n");
    }
}