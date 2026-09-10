#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
void handler(int sig)
{
if(sig == SIGINT)
printf("SIGINT handled\n");
if(sig == SIGTERM)
printf("SIGTERM handled\n");
if(sig == SIGUSR1)
printf("SIGUSR1 handled\n");
}
int main()
{
pid_t pid;
signal(SIGINT, handler);
signal(SIGTERM, handler);
signal(SIGUSR1, handler);
printf("Parent process ID = %d\n", getpid());
pid = fork();
if(pid == 0)
{
printf("Child process ID = %d\n", getpid());
printf("Generating SIGINT...\n");
raise(SIGINT);
return 0;
}
wait(NULL);
pid = fork();
if(pid == 0)
{
printf("Child process ID = %d\n", getpid());
printf("Generating SIGTERM...\n");
raise(SIGTERM);
return 0;
}
wait(NULL);
pid = fork();
if(pid == 0)
{
printf("Child process ID = %d\n", getpid());
printf("Generating SIGUSR1...\n");
raise(SIGUSR1);
return 0;
}
wait(NULL);
return 0;
}