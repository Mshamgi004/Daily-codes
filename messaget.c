// Message Get operation //

#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>

typedef struct msgbuf
{
   long msgtype;
   char buffer[512];
}msg;

int main()
{
   int qid;
   int i;
   msg m1,m2;
   
   qid = msgget(32,IPC_CREAT|0644);
   
   m1.msgtype=10;
   
   for(i=0;i<100;i++)
      m1.buffer[i]='a';
      m2.msgtype=20;
   
   for(i=0;i<100;i++)
      m2.buffer[i]='b';
   
   i = msgsnd(qid,&m1,sizeof(msg),0);
   printf("Return value of msgsnd of as= %d\n",i);
   
   i = msgsnd(qid,&m2,sizeof(msg),0);
   printf("Return of msgsnd of bs= %d\n",i);
   
   return 0;
}            
