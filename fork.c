#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

    child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        return 1;
    }

    if (child_pid == 0) {
     
        printf("Child process: My PID is %d\n", getpid());
    } else {
       
        printf("Parent process: My PID is %d\n", getpid());
        printf("Parent process: Child PID is %d\n", child_pid);
    }

    return 0;
}

