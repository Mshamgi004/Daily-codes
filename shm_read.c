#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/stat.h>

int main()
{
    char *r;
    int id;
    void *addr;
    
    //int *ptr = 83838;
    shmat(int id, void *addr, int flags);
    
    id = shmget(48,250,IPC_CREAT|0644);
    
    if(id < 0)
    {
        perror("shmget\n");
        return 0;
    }
    
    printf("id = %d\n", id);
    printf("Address is = %p\n",r);
    r = shmat(id,void *addr,0);
    printf("%s\n",r);
    //scanf("%s", p);
    
    return 0;
}    
