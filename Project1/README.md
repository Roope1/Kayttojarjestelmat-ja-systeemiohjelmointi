# Project 1 - Reverse


## Description:

Project 1 description can be found [here](https://github.com/remzi-arpacidusseau/ostep-projects/blob/master/initial-reverse/README.md).


### TL;DR
Simple reverse function that takes in an input file and prints it to output file reversed. If output file is not specified it prints to stdout. If input file is not specified, the input is taken from stdin.

---

## My Implementation:
My implementation is reading the input file into a stack data structure thus achieving a LIFO data flow. The stack is implemented as a linked list where I push each new element to the front of the list, so I can print the output by just printing out the elements of the list in order.

---

## How to run:
If you want to run this program download this directory and run it using the commands 
>> \> make 

>> \> ./reverse <input_file> <output_file>

Input and output files are optional and use stdin and stdout respectively if not specified.