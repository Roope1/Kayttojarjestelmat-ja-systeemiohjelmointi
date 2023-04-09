# Project 1 - Reverse


## Description:

Project 1 description can be found [here](https://github.com/remzi-arpacidusseau/ostep-projects/blob/master/initial-reverse/README.md).


### TL;DR
Simple reverse function that takes in an input file and prints it to output file reversed. If output file is not specified it prints to stdout. If input file is not specified, the input is taken from stdin.

---

## My Implementation:
My implementation is reading the input file into a stack data structure thus achieving a LIFO data flow. The stack is implemented as a linked list where I push each new element to the front of the list, so I can print the output by just printing out the elements of the list in order.

---

## Proof of working:

In the first example the program was ran with ``./reverse.out`` with no additional arguments. Thus the program read the input from stdin. Which can be seen here:

![working with no arguments](/Project1/img/no_arguments.png)

In this next example, the program was ran with ``./reverse.out test.txt`` and the ``text.txt`` file contained the [bee movie script](/Project1/test.txt) (1973 lines of text). With only 1 argument the input was taken from that file and the result was printed to stdout. The output of that can be seen here (well the end of it):

![working with the bee movie script](/Project1/img/bee_movie.png)

Heres also proof of the project not leaking memory using valgridn the command used to run this was ``valgrind ./reverse.out test.txt outputfile.txt``

![does not leak memory](/Project1/img/valgrind.png)

as we can see no memory leaks are possible:
 ``` 
HEAP SUMMARY:
==1449==     in use at exit: 0 bytes in 0 blocks
==1449==   total heap usage: 3,951 allocs, 3,951 frees, 95,485 bytes allocated
==1449==
==1449== All heap blocks were freed -- no leaks are possible 
```
