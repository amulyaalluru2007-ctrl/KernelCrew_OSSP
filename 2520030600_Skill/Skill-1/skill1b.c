#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    printf("Parent process started.\n");
    printf("Parent PID: %d\n", getpid());

    // Create a child process
    pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }

    else if (pid == 0) {
        // Child process
        printf("\nChild process created.\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID of child: %d\n", getppid());

        // Execute another program
        printf("Child is executing 'ls' using exec().\n\n");

        execlp("ls", "ls", "-l", NULL);

        // This executes only if exec fails
        perror("exec failed");
        exit(1);
    }

    else {
        // Parent process
        printf("\nParent is waiting for child process...\n");

        wait(NULL);

        printf("\nChild process completed.\n");
        printf("Parent process exiting.\n");
    }

    return 0;
}