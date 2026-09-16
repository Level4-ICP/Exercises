# Introduction to Computer Programming

## Implementing Solutions



Complete each of these tasks, discussing your work with your tutor and fellow apprentices. At the end of the exercise you should have a small selection of programs you have written.

note: ensure you attempt this exercise **without** the use of the Internet to find (one of the many) sorting algorithms that already exist.

**1\. Designing an algorithm**

Your first task is to design an algorithm to sort a list of numbers. The size of the list is unknown, and may contain the same value more than once.

Design your algorithm (without writing any code) by considering what systematic approach could be taken to sort the following list -

10, 20, 9, 18, 25, 10, 78, 1, 0, -10, 127

When designing your algorithm, feel free to generate other temporary lists, move things from one list to another, etc. Conversely you may design an algorithm which sorts the numbers "in-place" without need to generate additional temporary lists.

Document your algorithm by simply writing a list of steps in (semi-structured) English. Remember, algorithms are always a combination of steps involving sequence; selection; and iteration. Therefore you may want to include phrases such as "do the following as long as X is true", or "If condition X is true then do A, otherwise do B". You may wish to also draw a simple flow chart, which graphically shows your algorithm design.

Try to do a dry run of your algorithm by working through the example list provided, to see whether the result is indeed a fully sorted list. Then do the same again but with a small list (e.g. with only 2 items) to see whether your solution still works.

**2\. Implement your Solution**

Write a C program which implements your algorithm. For now you can probably put all the code in the main() function, expanding upon something like -

```
int list[] = { 10, 20, 9, 18, 25, 10, 78, 1, 0, -10, 127 };
int size = 11;
// implement the code to sort the list using your algorithm
// implement some code to print the contents of the list to check it is sorted
```

Once your program is complete, run and test it multiple times by changing the contents of the sample list.

**3\. Designing an alternative algorithm**

Once you have a working solution, it is time to consider an alternative. Design an alternative algorithm which works differently from your first attempt. Try to make the algorithm as different as possible, i.e. do not just apply very minor tweaks.

Once the design is complete, extend your program to that it implements the alternative algorithm in addition to the original. You may decide to move the original code to a separate function. Run your new version, and ensure it works as expected with the same test data as before.

Now you have completed multiple implementations, can you determine which one you prefer? And Why?

Explain your thinking to your tutor.

You may also consider -

- How efficient is each algorithm if applied to an already sorted list?
- What happens if the list is empty?
- How efficient is each algorithm if all values are the same?
- How efficient is each algorithm if the list is in exactly the inverse order?

Think you're finished with these? Edit the above program so it includes comments. Include a multi-line comment at the top of the program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solution to the tutor.
