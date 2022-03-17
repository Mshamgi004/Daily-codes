// Linux internal //
// Q.1 //
// MAHADEV G I //

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    printf("We are in L2a.c\n");
    printf("PID of L2a.c = %d\n" , getpid());
    
    return 0;
}    
