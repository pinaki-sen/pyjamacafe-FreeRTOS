# Section-1: Introduction and Setup
<Todo: complete the docs>

# Section-2: Booting the ARM M CPU from Scratch
<Todo: complete the docs>

# Section-3: Exploring FreeRTOS Source

## 1. Jumping from asm code to function in C files
<Todo: complete the docs>
## 2. Fixing the problem of function calls in C
<Todo: complete the docs>
## 3. Getting the FreeRTOS source code and documentation
- RTOS beginner's guide - https://github.com/FreeRTOS/FreeRTOS-Kernel-Book/releases/download/V1.1.0/Mastering-the-FreeRTOS-Real-Time-Kernel.v1.1.0.pdf

- moved all our code to \port
- cloned RTOS-kernel code from https://github.com/FreeRTOS/FreeRTOS-Kernel to our env, parallel to \port

# Section-4: Integrating the FreeRTOS Kernel
## 1. Starting to Integrate the FreeRTOS-Kernel
- added FreeRTOSConfig.h header in /port dir, here we will provide configurations like priority, tasks, stacks etc
- added path of the headers in Make to compile the files from FreeRTOS-kernel, provided the path to compile cmd
