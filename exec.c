#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    printf("This is the original process.\n");
    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        if (execl("/bin/ls", "ls", "-l", NULL) == -1) {
            perror("execl");
            exit(EXIT_FAILURE);
        }
printf("This won't be printed in the child process.\n");
    } else {
     
        wait(NULL);

        printf("Child process has finished.\n");
    }

    printf("This is the end of the original process.\n");
    return 0;
}

