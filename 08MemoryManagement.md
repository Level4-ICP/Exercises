# Introduction to Computer Programming

## 08 Memory Management

**1\. Allocating memory**

Write a C program (called num_memory.c) which implements the following -

1. Write a function called allocate_vals(int count) that uses dynamic memory allocation to reserve enough memory for 'count' floating point values. On success this function should return a pointer to the reserved memory. If the memory could not be reserved then it should output an error message saying "memory could not be allocated" and return NULL.
2. Write another function called init_vals(float \*num_ptr, int count) which initialises each value in the memory block to 100. Your code will need to use a loop to step through each location of memory. Remember, a pointer can be indexed in the same way as an array using \[ \].
3. Write another function called display_vals(float \*num_ptr, int count) which prints out the values contained within the allocated memory block. Your code will again need to use a loop to step through each location of memory.
4. Write a main() function which calls the above functions, and ensure the displayed output is as expected.
5. What extra code do you think is missing from the main() function prior to it exiting?

**2\. Reallocating memory**

Write a C program (called expanding_memory.c) which contains three global variables as follows -

```
char *bytes = NULL; // a block of memory containing stored bytes
int size = 0;   // the size of the block of memory
int count = 0;   // a count of bytes currently stored
```

Then write a function called add_byte(char value) that adds the given value to the 'bytes' block of memory. In order to do this, the following will need to be implemented -

1. Check if the 'size' of the block is large enough to store an additional byte, this can be done by comparing the 'count' against the 'size'.
2. If the 'size' is too small then the 'bytes' memory will have to be (re)allocated
3. The 'size' of the memory block should be increased 8 bytes at a time.
4. Once enough memory is available the value should be stored, and the 'count' increased

Once the above function is written, implement a main() function which attempts to add 20 values (from 0 to 19), by calling add_byte(). You may wish to do this from within a loop. Add additional code that outputs the contents of the 'bytes' memory block to the screen, along with the current 'size' and 'count' values. Display this information each time a new value is added, to confirm the function and reallocation process is behaving as expected. If this works your output should look something like the following -

```
Size = 8, Count = 1, Values = 0
Size = 8, Count = 2, Values = 0 1
Size = 8, Count = 3, Values = 0 1 2
Size = 8, Count = 4, Values = 0 1 2 3
Size = 8, Count = 5, Values = 0 1 2 3 4
Size = 8, Count = 6, Values = 0 1 2 3 4 5
Size = 8, Count = 7, Values = 0 1 2 3 4 5 6
Size = 8, Count = 8, Values = 0 1 2 3 4 5 6 7
Size = 16, Count = 9, Values = 0 1 2 3 4 5 6 7 8
Size = 16, Count = 10, Values = 0 1 2 3 4 5 6 7 8 9
Size = 16, Count = 11, Values = 0 1 2 3 4 5 6 7 8 9 10
Size = 16, Count = 12, Values = 0 1 2 3 4 5 6 7 8 9 10 11
Size = 16, Count = 13, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12
Size = 16, Count = 14, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13
Size = 16, Count = 15, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
Size = 16, Count = 16, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Size = 24, Count = 17, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Size = 24, Count = 18, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
Size = 24, Count = 19, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
Size = 24, Count = 20, Values = 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
```

Finally add a call to free() once prior to the programming existing, to ensure any allocated memory is deallocated.

**3\. Extra Challenge - only complete once all other solutions are FULLY working and you are very confident with programming**

Write a C program (called linked_list.c) that is based on the ll_example.c file provided with the slides. Extend the original program so that it includes the following.

1. Add a function with the following signature:

```
struct stock_item *find_stock_item(struct element *head, int id)
```

which finds the stock item with the given 'id', and returns a pointer to this. It should return NULL if no item exists with the given 'id'.

1. Add a function with the following signature:

```
struct element* insert_after(struct element *head, int id, struct stock_item item)
```

which adds a new stock item to the list, after an existing stock item identified by the given 'id'. If no stock item exists with the given 'id' then the new stock item should be added to the end of the list. The returned value should be the newly added element.

1. Add a function with the following signature:

```
struct element* remove_stock_item(struct element *head, int id)
```

which removes the stock item with the given 'id' from the list. If the item is found and removed then the (possibly new) head of the list should be returned, otherwise NULL should be returned.

Add code to the main() function to test each of these new functions.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
