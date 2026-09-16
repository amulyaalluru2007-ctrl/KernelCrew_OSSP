1.wait():
Waits for any one child process to complete.
The parent does not choose which child is collected.

2.waitpid():
Waits for a particular child process.
The parent specifies the PID of the child.

Zombie Process:
A zombie process is a child process that has finished execution, but its parent has not yet collected its exit status. 
Therefore, it remains in the process table.

Description:
The parent creates a child process using fork().
The child terminates using exit(0), but the parent does not call wait() to collect the child's exit status.
The parent sleeps for 30 seconds. During this time, the terminated child remains in the process table as a zombie process.

While the parent is sleeping, open another terminal and execute:
ps -el
The child process can appear with:
Z- indicates that the process is in the Zombie state.

When the parent calls wait(), it collects the child's termination status.
Therefore, the child is removed from the process table and does not remain as a zombie.
