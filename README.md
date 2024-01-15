Monty Project
Monty is a simple interpreter for a subset of the Monty Bytecode language.

Table of Contents
Description
Project Files
Getting Started
Usage
Examples

Description

The Monty project is an interpreter for Monty Bytecode, a simple stack-based programming language. The interpreter is capable of executing Monty bytecode files (.m) that contain a set of instructions to manipulate a stack. The Monty language supports various operations such as pushing, popping, arithmetic calculations, and more.

Project Files
The project includes the following files:

opfunc.c: Implementation of Monty bytecode operations.
addstak.c: Adds the top two elements of the stack.
node.c: Creates a node for the stack.
nop.c: A function that does nothing.
pall.c: Prints the elements of the stack.
pop.c: Removes the top element of the stack.
swap.c: Swaps the top two elements of the stack.
add_node.c: Adds a node to the stack.
call_funk.c: Calls the required Monty bytecode function.
errrr_file.c: Handles errors in the Monty interpreter.
find_func.c: Finds the correct function for a given Monty bytecode.
free.c: Implementation of memory deallocation functions.
main.c: The main function of the Monty interpreter.
monty.h: Header file containing function prototypes and declarations.
toprint.c: Prints the top element of the stack.
Getting Started
To get started with the Monty project, follow these steps:

Build the Monty interpreter:

gcc -Wall -Werror -Wextra -pedantic *.c -o monty
Usage
Run the Monty interpreter with a Monty bytecode file:

./monty file.m
Examples
Here are some examples of Monty bytecode files:

Example 1 (Push and Pop):

push 1
push 2
push 3
pall
pop
pall
Example 2 (Arithmetic Operations):

push 10
push 5
add
pall
