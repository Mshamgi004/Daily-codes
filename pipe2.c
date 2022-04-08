#include<unistd.h>
#include<stdio.h>


int fds[2];
void  parent_code()
{
    char *buf1="aaaaaaaaaaaaaa";
    char *buf2="bbbbbbbbbbbbbb";
    
    close(fds[0]);
    
    write(fds[1],buf1,20);
    write(fds[1],buf2,20);
    //read(fds[0],buf2,40);
    printf(" end of parent\n");
}

void child_code()
{
    char buf[100];
    int n,i;
    close(fds[1]);
    n = read(fds[0],buf,100);
    printf(" no of chars read = %d\n",n);
    for(i = 0;i<n;i++)
       printf("%c",buf[i]);
    printf(" end of child \n");
}

int main()
{
    int res,i;
    pid_t p;
    res = pipe(fds);
    
    p = fork();
    if(p == 0)
    {
        child_code();
    }
    else
    {
        parent_code();
    }
    return 0;
}                       
