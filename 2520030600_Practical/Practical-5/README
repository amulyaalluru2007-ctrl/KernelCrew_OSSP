1.Pipe Communication Process:
The program creates an anonymous pipe and then creates a child process using fork().

The parent process acts as the Producer.
The child process acts as the Consumer.
The parent generates 5 data items.
The data is sent through the pipe using write().
The child receives the data using read().
The communication time is measured using clock().

System Calls Used:
SystemCall	Purpose
pipe()	Creates an anonymous pipe for communication
fork()	Creates the child process
dup2()  connects the pipe with standard input/output.
exec() executes commands such as ls and grep.

Measuring Communication Efficiency:
The program uses clock() to measure the time taken for communication.
Communication Time = End Time - Start Time


2.
ls -l | grep ".c"
Two child processes are created.

Child 1:
ls -l
generates the directory listing and sends its output to the pipe.

Child 2:
grep ".c"
reads the data from the pipe and displays the lines containing .c.

Therefore, the program behaves like:
ls -l | grep ".c"
