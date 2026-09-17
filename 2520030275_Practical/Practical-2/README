2. File Copy Using System Calls
Aim

To copy the contents of one file to another using Linux file-related system calls.

System Calls Used
open() – Opens a file.
read() – Reads data from a file.
write() – Writes data to another file.
close() – Closes the opened file.
Working

The program:

Opens the source file.
Creates or opens the destination file.
Reads data from the source file.
Writes the data into the destination file.
Continues until the complete file is copied.
Closes both files.
User Space and Kernel Space

Applications normally execute in user space.

When an application needs services such as file access, it uses system calls to communicate with the Linux kernel.

C Program
    ↓
User Space
    ↓
System Call
    ↓
Kernel Space
    ↓
File System / Hardware
    ↓
Result
    ↓
User Space

The kernel checks permissions, manages file access, communicates with storage devices, and returns the result to the application.

This separation provides:

Security
Protection
Controlled hardware access
Resource management
strace Experiment

The strace utility is used to observe the system calls generated when executing:

cat sample.txt

The important system calls observed include:

execve() – Starts the cat program.
openat() – Opens the file.
read() – Reads the contents.
write() – Displays the contents on the terminal.
close() – Closes the file.
General Sequence
execve()
   ↓
openat()
   ↓
read()
   ↓
write()
   ↓
close()

The exact strace output may vary depending on the Linux distribution and system configuration.

Files
practical2.c
sample.txt
source.txt
