// Spinlock implementation //

#define _XOPEN_SOURCE 600

#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<bits/types.h>
#include<sys/types.h>

static pthread_spinlock_t spinlock;
volatile int slock;

void *spinlockTHread(void *i)
{
   int rc;
   int count = 0;
   
   printf("Entered thread %d, getting Spin lock \n", (int *)i);
   rc = pthread_spin_lock(&spinlock);
   
   printf("%d THread unlock the spin lock\n",(int *)i);
   rc = pthread_spin_unlock(&spinlock);
   
   printf("%d THread complete\n", (int *)i);
   
   return NULL;
   
}

int main()
{
   int rc = 0;
   pthread_t thread, thread1;
   
   if(pthread_spin_init(&spinlock,PTHREAD_PROCESS_PRIVATE)!=0)
     perror("init");
   printf("Main, get spin lock\n");
   rc = pthread_spin_lock(&spinlock);
   
   printf("Main, create the spin lock thread\n");
   rc = pthread_create(&thread, NULL,spinlockTHread, (int *)1);
   
   printf("Main, wait a bit holding the spin lock\n");
   sleep(10);
   
   printf("Main, Now unlock the spin lock\n");
   rc = pthread_spin_unlock(&spinlock);
   
   if(rc == 0)
       printf("\n Main THread Succesfully unlocked\n");
   else
       printf("\n Main THread unsuccessfully unlocked\n");
       
   printf("Main, wait for the thread to end\n");
   rc = pthread_join(thread, NULL);
   
   printf("Main completed\n");
   
   return 0;
   
}                

