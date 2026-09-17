3. Process Creation and Process States
Aim

To create a parent and child process using fork() and observe their process IDs, parent process IDs, and process states.

Concepts Used
Process creation
PID
PPID
Parent and child processes
Process synchronization
Process states
Linux process monitoring
Working

The program creates a child process using fork().

Both parent and child have their own process IDs.

The child performs some operations and uses sleep() to remain active for observation.

The parent uses wait() to wait for the child to finish.

Process Information
PID

PID stands for Process ID.

It uniquely identifies a process running in Linux.

PPID

PPID stands for Parent Process ID.

It identifies the process that created the current process.

Process State Experiment

The experiment observes process states using:

ps
top
/proc

A simplified process lifecycle is:

Ready
  ↓
Running
  ↓
Waiting
  ↓
Running
  ↓
Terminated
Process States
Ready

The process is ready to execute but is waiting for CPU time.

Running

The CPU is currently executing the process.

Waiting

The process is waiting for an event such as I/O, a timer, or another process.

Terminated

The process has completed execution.

Monitoring Using ps

ps is used to view process information such as:

PID
PPID
Process state
Command
Monitoring Using top

top provides a continuously updating view of running processes and their resource usage.

It can be used to observe:

CPU usage
Memory usage
Process IDs
Process activity
Monitoring Using /proc

Linux provides process information through the /proc virtual file system.

Information such as PID, PPID, and process state can be obtained from the process-specific directory.

Observation
Stage	Expected State	Observation
After fork()	Ready/Running	Parent and child are created
Child execution	Running	Child executes instructions
Child sleep()	Waiting/Sleeping	Child waits for the timer
Parent wait()	Waiting	Parent waits for child
Child completion	Terminated	Child finishes execution
Parent resumes	Running	Parent continues execution
Parent completion	Terminated	Parent finishes
Files
process.c
