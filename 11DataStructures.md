# Introduction to Computer Programming

## 11 Data Structures

**1\. Creating a stack**

1. Write a C program (called stack.c) which implements functions to push(), pop() and peek() the contents of a stack. The stack itself should be backed by an array of maximum size 100, and only be capable of storing floating point numbers. _Hint:_ You will need a variable to keep track of the _top_ of stack position.
2. Add another function called print_stack() which displays the contents of the stack for testing purposes.
3. Write a main() function which uses the stack operations and displays the contents after each operation to show the functions perform as expected.

**2\. Creating a queue**

1. Write a C program (called queue.c) which implements functions to enqueue(), dequeue() and get the queue's size(). The queue itself should be backed by an array of maximum size 16, and only be capable of storing floating point numbers. _Hint:_ You will need two additional variables to keep track of the _front_ and _end_ of the queue.
2. Add another function called print_queue() which displays the contents of the queue for testing purposes.
3. Write a main() function which uses the queue operations and displays the contents after each operation to show the functions perform as expected.
4. Try and improve the queue so it acts as a _circular queue_, meaning the values do not eventually drift off the end of the available array space.

**3\. Creating a binary tree**

1. Write a C program (called num_tree.c) which implements functions to add() and find() numeric values within an ordered binary tree. Each element within the tree should be represented by a structure as follows -

```
struct element
{
   int value;
   struct element *left_child;
   struct element *right_child;
};
```

The add() function should navigate the tree contents to locate a suitable insertion position for a newly created element, dynamically created using malloc().

The find() function should return 1 if a given value is found, or 0 if it does not exist within the tree.

A variable called 'root' (initially set to NULL) should represent the _root_ of the tree, and be first assigned when the first element is added.

1. Write a main() function which uses the tree operations to add and find values, for testing purposes.
2. Try and improve the tree so its contents can be displayed in order. This will require implementation of a traversal algorithm. Hint: you will probably need to add a 'parent' member to the element struct in order to navigate the tree correctly.
3. Finish the program by writing code to free() all dynamically created elements, prior to the program finishing.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
