#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Sleeping for 3 seconds...\n");
    sleep(3); 
    printf("Awake!\n");

    return 0;
}

