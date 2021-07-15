- 2 and 3 Layer Embedded Systems
- Toolchain
  - Native (eg. gcc)
  - Cross (eg. arm-none-eabi-gcc)
- ELF (Intermediate object/ binaries/ executables)
- gcc -c (compile only)
- .code / .text
- objdump -S (dissasembly)
- declaration and definition
  - ^ declaration preferably => header file
  - ^ definitions preferably => c file
- Embedded Systems

  - CPU
  - IO
  - Memory

- Git

  - git init
  - git add .
  - git commit -m "msg"
  - git status
  - git log

- Good practices

  - Modularize across functions and files
  - Give appropriate names to variables and functions
  - Initialize variables
  - Declare important functions in separate header files

- Header File vs Libraries
- Build Process

- Address Space
- Libraries

  - Static (.a) => ar
  - Dynamic (.so) => gcc

- Program sections

  - .code
  - .bss
  - .data
  - heap
  - stack

- Address Space

  - Kernel Space
  - User Space

- Library Calls
- System Calls

  - open, read, write, close
  - ^ Assignment: Use read system call
  - ^ Assignment: Write your own copy utility using system calls
  - ^ Assignment: What is the difference between
    - Bufferred IO
    - Formatted IO
  - file descriptor
  - stdin, stdout, stderr

- Stack related concepts

  - stack
  - stack pointer
  - stack frame

- fork
  - Zombie
  - Orphan
- pipes

- Context

  - PC, GPR, Flags, SP
  - Context Switch => Context Saving and Context Restoring
  - P1 => CS(P1) => Sched (chosen P2) => CR(P2) => P2

- Program vs Process
- Multi User
- Batch Systems
- Multi Programming
- Multi Tasking
- Multi Processing
- Multi Threading
- Concurrent
  - Pseudo
  - True
- Response times
- PCB

- PID and Parent ID

- Monolithic and Micro Kernels
- User space and Kernel Space
- Library and System calls
- Blocking call and Non-blocking calls

- CPU (GPR, PC, SP, Flags) => Context
- Context Saving
- Context Restoring
- Context Switching (CS+CR)

- Premptive and Non-Premptive
- Scheduling algorithms

  - FIFO
  - RR => Quantum Period
  - SJF
  - Priority
  - Earliest Deadline First
  - Rate Monotonic Scheduler

- Response Time, Waiting Time, Throughput
- Dispatcher
- Process state diagram
  - Create
  - Ready
  - Running
  - Waiting
  - Terminate
- fork
- COW

- IPC and Synchronization
- Pipes
- FIFO
- Exec
- Race conditions
- Critical Sections
- Mutual Exclusion
- Mutex -> Types of Mutex
- Deadlock
- Semaphore, Types of Semaphores (ME, Signaling, RM [Counting semaphore])
- Barriers
- Conditional Variables
- Shared memory
- Message Queues
