# Embedded operating system

## Books referred 

 - Building Embedded linux Systems by Karim Yaghmour OReilly publications 
 - Mastering Embedded linux programming by Chris Simmonds
 - Beginning Linux Programming by Neil Mathew and Richard Stones

# Tools used

- typora
- draw IO
- shutter
- visual stdio code



# Date 24/11/2021

# topic covered

- Embedded system vs General Purpose System
- Two and three layer Embedded system


- Parrallelism
  - Pseudo Parrallelism
  - True Parrallelism

- Uniprocessor
- Multiprocessor

- Hex dump vs Execution under Embedded linux

 ## How to modularize the project and code

 - read about buid process
- use of makefile
- making of makefile
- use of objdump

## ELF (Executable binary file)

- ELF is executale & linkable file


- read about cross compiler arm

    


# Date 25/11/2021

- File system
  - ROOT FS
  - Dictionary structure

- Shell
  - Environment variable
  - PATH, USER
  - Custom Environment variable

- Section
  - .txt  => PC/IP
  - .data => global initialize
  - .bss  => global uninitialize
  - heap  => malloc
  - stack => return addr, local variable

- Build process

# Date 26/11/2021

## C

 - Header (importance header files)
 - Library
 - Difference between header and library
 - Declaration => function prorotype
 - Defination
 - process
   - program under execution
 - CPU management called Process management
 - read about typedef

## Library 

   - library file is for reused, it include the .o file.
   - static library (.a)      => ar
   - dynamic library (.so)    => gcc -shared -fPIC
   - difference between static and dynamic library


   - - **export LD_LIBRARY_PATH=.**

       - above command will used when you are in same directory.

         - **export LD_LIBRARY_PATH=./tmp**
           - /tmp will be used when your library file is in some other path...

         

## System call library call

## PID and PPID

  - getpid()
  - gitppid()

# Date 29/11/2021

- Adress Space
- User Space
- kernel Spce

- Segmentation Fault

- PCB - data structure to hold the information about the process

- Library call vs System call

- 1:- system cell
- 2:- ./desdcp src.text dest.txt

# Date 30/11/2021

 ## Fork

   - parent_id
   - child_id
     1) parent: Writing
     2) child: Read

  ## pipes

  - IPC (inter process communicate)
  - NAMEMO pipes
  - fd = open & closed
    1:- read
    2:- write

  ## fifo

    - desdfifo
    - Read (O_RDONLY)
    - Write (O_WRONLY)

  ## Process state Digram

  - create
  - ready
  - running(CPU)
  - waiting
  - Exit

  # DATE 01/12/2021


  ## THREAD

  # DATE 02/12/2021

  ## VALGRIND

  - memleank

  ## EXEC

   - shell


  # DATE 03/12/2021

   ## Rececondition

   ## syncronzation



# DATE 06/12/2021

## Mutex

## recurstion

- 1)rec_prob_mutex

- 2)rec_sol_mutex

## sem.

- 1)sem_solution

- 2)semsig

# DATE 07/12/2021

## shared memory

## Mqueue

- sender 
- receiver

## Barrires

# Date 10/12/2021

## Memory-management 

