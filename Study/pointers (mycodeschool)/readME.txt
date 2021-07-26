The memory allocated for the execution of a program is typically divided into four parts.
1. code segment of memory: stores the instructions

2. static/global variables

3. stack memory: static memory allocation
> stores all information regarding function call and excution, stores local variable

4. heap memory: dynamic memory allocation

DYNAMIC MEMORY ALLOCATION
heap memory is accessed using refrence

C
malloc- malloc function looks for free space in the heap, reserves it for the variable returns a void pointer which stores address the first byte of the memory
> takes one argument- size in bytes
> doesn't initializes the memory allocated

calloc- returns void pointer to the starting address of the memory
> takes two arguments- number of elements and size of datatype (in byte)
> initilizes allocated memory to zero

realloc- used to change the size of a dynamically allocated memory
> takes to argument- pointer to starting address of the memory block, new size of the block

free- used to deallocate memory allocated by malloc function

cpp
new- returns pointer to heap memory address
delete- used to deallocate memory of an object in heap