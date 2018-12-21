# 0x18. C - Stacks, Queues - LIFO, FIFO
## Description

In this project, we created a simple create an interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.

**Entry Functions**

File | Function | Description
-----|-----|----
main.c | main | control program

**Essential Functions**

File | Function	| Description
-----|-----|----
op_call.c | call the correct function | searches an array of structs and calls the appropriate function using a function pointer
tokenize.c | tokenize | parse the line from getline() into tokens
op_func_0.c |    -     |  command implementations
op_func_1.c |    -     |  command implementations
op_func_2.c |    -     |  command implementations

## Examples

### Usage
./monty [BYTE_CODE_FILE]

#### A bytecode file (file1) containing the following:
push 1
.br
push 2
.br
push 3
.br
pall
.br
will produce the following:
.br
./monty file1
.br
3
.br
2
.br
1

#### Authors/Collaborators
`Stefan Silverio & Martin Smith`