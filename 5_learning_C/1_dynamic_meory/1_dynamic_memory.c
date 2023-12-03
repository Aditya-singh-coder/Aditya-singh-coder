
/*static meory allocation:-
memory allocated during compile time is called static memory
the meory allocated is fixed and cannot be increased or decreased during riun time.

problems with static memory:-
-> if you're allocating memory for an array for an array during compile time
then you to fix the size at the time of declarion. 
size is fixed and user cannot increase or decrease the size of the array at the run time.
-> if the volues stored by the user in the array at the run time is less than the size specified then
there will be wastage of memory.

dynamic memory allocation:-
->heap memory is where dynamic memory allocation takes place
->unlike stack where meomry is allocated or deallocated in a defined order,
heap is an area of memory where memory is allocated or deallocated without any order or randomly.
-> there are certain built-in functions that can help in allocating or deallocating some memory space at the run time.
-> pointers play an important role in dynamic memory allocation
allocated memory can only be accessed through pointers.
->the process of allocating memory at the time of the execution is called dynamic memory allocation
built in functionsn are :-
malloc()
calloc()
realloc()
free()*/