#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;
    int status;

  
    child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        exit(1);
    }

    if (child_pid == 0) {
        
        printf("Child process: My PID is %d\n", getpid());
        sleep(2); 
        exit(42);  
    } else {
        
        printf("Parent process: Child PID is %d\n", child_pid);

        wait(&status);

        if (WIFEXITED(status)) {
            printf("Parent process: Child exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("Parent process: Child did not exit normally\n");
        }
    }

    return 0;
}

