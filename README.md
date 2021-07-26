- 2 and 3 Layer Embedded Systems
- Toolchain
  - Compiler, Linker, Debuggers, Binary Utilities (objdump, objcopy)
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

  - CPU - Process Management
  - IO - IO Management including DD
  - Memory - Memory Management

- Process Management

  - Created Process (fork)
  - IPC (pipes, fifos, mq, shared mem)
  - Sync (sem, mutex)

- Git (version control system)

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

  - specific to platform

    - UNIX - SCI (Unices)
    - Windows - SCI

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
    - calls function - create
    - return function - delete
    - return address
    - arg and local variables stored stack frame

- fork
  - Zombie
  - Orphan
  - related processes (parent <-> child)
- pipes

- Context

  - PC, GPR, Flags, SP
  - Context Switch => Context Saving and Context Restoring
  - P1 => CS(P1) => Sched (chosen P2) => CR(P2) => P2

- RR - Quantum time

  - 100ms (P1 -> 100ms -> P2 -> 100ms)
  - Define -
  - Embedded Linux - 100ms -> 80ms -> 120ms

- CPU governors

- ARM -> Banked Registers

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

- init process / systemd

- Monolithic and Micro Kernels
- User space and Kernel Space
- Library and System calls

IPC

- Pipes
- FIFOs (named pipes)

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
- | 10ms | 10ms |
  | P1 | P2 |
  |------>|------>|
- fork
- COW

- IPC and Synchronization
- Pipes
- FIFO
- POSIX Threads

- Exec
- Resource -> used process
  - variable, struct, io port, register, printer
- Shared Resource
  - eg. UART
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

* Write a library to provide the following functionality on a RPI:
  - Turn ON or OFF a LED connected to pin 23 of RPI
  - Read digital data from a switch connected to pin 25 of RPI
  - Get distance from a connected Ultrasonic module
  - Get temperature and humidity through the connected sensor module
  - Control a relay
  - Turn on a Buzzer
  - Detect presence of magnetic field
  - Get air quality
  - Get presence of specific gas
  - Wait for a vibration or knock
  - Get presence of light or darkness
  - Get sound presence in the vicinity

Use the lgpio library
