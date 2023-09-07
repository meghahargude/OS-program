#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int pid=fork();
if (pid>0){
printf("parent process\n");
printf("ID:%d\n\n",getpid());
}
else if(pid==0){
printf("child process\n");
printf("ID:%d\n",getpid());
printf("parent-ID:%d\n\n",getpid());
sleep(10);
printf("\nchild process \n");
printf("ID: %d\n",getpid());
printf("parent-ID:%d\n",getpid());
}
else{
printf("failed to create child process");
}
return 0;
}
