#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {

        // Child process
        printf("\n--- Child Process ---\n");
        printf("PID  : %d\n", getpid());
        printf("PPID : %d\n", getppid());

        printf("Child is running...\n");

        sleep(10);

        printf("Child is running again after sleep.\n");

        sleep(5);

        printf("Child terminating...\n");
        exit(0);
    }

    else {

        // Parent process
        printf("\n--- Parent Process ---\n");
        printf("PID  : %d\n", getpid());
        printf("Child PID : %d\n", pid);

        printf("Parent is waiting for child...\n");

        wait(NULL);

        printf("Child has terminated.\n");
        printf("Parent terminating...\n");
    }

    return 0;
}