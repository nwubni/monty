Monty Scripting Language.



What is Monty ?

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.

About this project

The goal of this project is to create an interpreter for Monty ByteCodes files.
Learning objectives
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables
Requirements
All files are designed to be compiled on Ubuntu 20.04 LTS
Compiled with gcc using the options -Wall -Werror -Wextra -pedantic -std=c89
Code should use the Betty style
No more than 5 functions per file
Installation
Clone this repository: 
Change your directory to this repository: cd monty
Compile the program with gcc: gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

Usage
run the interpreter: ./monty file_name

Example:

julien@ubuntu:~/monty$ cat bytecodes.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes.m 
1
2
3
julien@ubuntu:~/monty$

Project Done by:
Nakuru Wubni and Ephraim Abstaina 

This is an open source project , so feel free to contribute  it and use it without any permission 
