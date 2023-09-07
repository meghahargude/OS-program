#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
pid_t pid=fork();
if(pid== -1){
perror("fork failed");
exit(1);
}
if (pid == 0){
execl("/bin/ls","ls",NULL);
perror("execl failed");
exit(1);
}else {
sleep(2);
wait(NULL);
printf("parent procssis done.\n");
}
return 0;
}
