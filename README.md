#Monty Project


Monty is a simple interpreter for a subset of the Monty Bytecode language.

#Table of Contents
#Description
#Project Files
#Getting Started
#Usage
#Examples

#Description



The Monty project is an interpreter for Monty Bytecode, a simple stack-based programming language. The interpreter is capable of executing Monty bytecode files (.m) that contain a set of instructions to manipulate a stack. The Monty language supports various operations such as pushing, popping, arithmetic calculations, and more.

#Project Files


The project includes the following files:

opera.c: open and read files 

stack_funk.c: Implementation of Monty bytecode operations.

stack_funk2.c: Implementation of Monty bytecode operations.

opfunc.c: Calls the required Monty bytecode function 
 and Finds the correct function.

errrrr.c: Handles errors in the Monty interpreter.

main.c: The main function of the Monty interpreter.

monty.h: Header file containing function prototypes and declarations.

parse.c: Separates each line into tokens to determine which function to call


#Getting Started


To get started with the Monty project, follow these steps:

#clone this repo 

https://github.com/azzaguesmi00/holbertonschool-monty



#Build the Monty interpreter:


gcc -Wall -Werror -Wextra -pedantic *.c -o monty


#Usage


Run the Monty interpreter with a Monty bytecode file:


./monty file.m



#Examples


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

