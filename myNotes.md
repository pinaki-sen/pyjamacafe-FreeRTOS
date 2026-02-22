# Section-1: Introduction and Setup
<Todo: complete the docs>

---
---
# Section-2: Booting the ARM M CPU from Scratch
<Todo: complete the docs>

---
---
# Section-3: Exploring FreeRTOS Source

## 1. Jumping from asm code to function in C files
<Todo: complete the docs>
## 2. Fixing the problem of function calls in C
<Todo: complete the docs>
## 3. Getting the FreeRTOS source code and documentation
- RTOS beginner's guide - https://github.com/FreeRTOS/FreeRTOS-Kernel-Book/releases/download/V1.1.0/Mastering-the-FreeRTOS-Real-Time-Kernel.v1.1.0.pdf

- moved all our code to \port
- cloned RTOS-kernel code from https://github.com/FreeRTOS/FreeRTOS-Kernel to our env, parallel to \port

---
---
# Section-4: Integrating the FreeRTOS Kernel
## 1. Starting to Integrate the FreeRTOS-Kernel
- added FreeRTOSConfig.h header in /port dir, here we will provide configurations like priority, tasks, stacks etc
- added path of the headers in Make to compile the files from FreeRTOS-kernel, provided the path to compile cmd

## 2. Finding and fixing the portmacro.h errors
- There are always some dependency on the CPU we are porting FreeRTOS for. those configs are board/CPU specific, which the user need to configure.
- If lucky, we will get some pre-written ones in FreeRTOS-Kernel/portable, in other case we need to write ourselved. Here we will use the FreeRTOS-Kernel/portable/GCC/ARM_CM3/portmacro.h
- The path will be included in our Makefile to compile
- Sycall interrupt priority, stack size etc needs to be defined in the config file. Still a lot of config macros need to be defined.

## 3. Finding and adding the FreeRTOSConfig
- Rest of config macros are added

## 4. Enabling heap for dynamic memory allocation
- task object file is added
- heap_4 is added
- memset is defined in portFunctions.c

## 5. Setting the Scheduling Rate
- port file is included for compilation
- CPU clock speed and Tick rate also configured

## 6. Getting the Kernel to compile successfully
- list source file path is added. Now we are able to compile successfully

---
---
# Section-5: Investigating Runtime Instabilities
### 1. Running the compiled binary
- started the execution on qemu, but as soon as vTaskStartScheduler starts executing, CPU faces hardfault and QEMU crashes, probably because no task is initialized yet.

### 2. Investigating why task is not getting created

### 3. GDB Investgation - Memory Allocation failure

### 4. Correcting the boot-up code and memory init


---
---
# Section-6: Debugging and Getting the Scheduler to run
### 1. Installing the Exception Handlers

### 2. Hunting the cause for the Hard Fault

### 3. Getting the Scheduling to work


---
---
# Section-7 : Fixing errors and Testing on real hardware
### 1. Correcting the Linker script and reasoning about SVC

### 2. Working with Hardware, uploading the code

### 3. Loading the code to board and exploring task scheduling


---
---
# Section-8: Conclusion and Next Steps
### 1. Exploring the Scheduler implementation

### 2. Summary and What to pursue next

