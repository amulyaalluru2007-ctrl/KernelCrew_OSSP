mkfifo()- Creates a named pipe (FIFO)
open()- Opens the FIFO for reading or writing
read()- Reads data from the FIFO
write()- Writes data into the FIFO
close()- Closes the opened FIFO
fork()- Creates a child process
raise()- Generates a signal for the current process
signal()- Registers a signal handler
getpid()- Returns the Process ID (PID)


FIFO Behavior with client-server application:
1.Each client writes its message to the FIFO.
2.The server reads the messages from the FIFO.
3.Messages are processed as they reach the FIFO.
4.Multiple clients can communicate with the same server.
5.The order of processing may depend on which client writes first.
6.For more complex applications, synchronization is required to avoid conflicts.
7.fork() can be used to create separate processes for handling multiple clients.

Asynchronous Event Handling:
Signals are asynchronous events because they can occur at any time while a process is running.
The operating system interrupts the normal execution of the process and invokes the appropriate signal handler.

Signals Used:
SIGINT-	Interrupt signal, commonly generated using Ctrl+C
SIGTERM-	Termination request
SIGUSR1-	User-defined signal

Signal Handler:
The signal() function registers a handler function that executes when the corresponding signal is received.
The following statements register the handler:
signal(SIGINT, handler);
signal(SIGTERM, handler);
signal(SIGUSR1, handler);
When a signal is generated using raise(), the registered handler() function processes the signal.
