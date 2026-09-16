# Introduction to Computer Programming

## 07 Arrays and Pointers

**1\. Using Arrays**

1. Write a C program (called averages.c) that contains a function which is able to calculate the average of all numeric values stored within an array. The function should be based on the following skeleton code -

```
float calc_averages(int count, float num_list[]) {
   // iterate over 'count' number of elements in num_list
   // and calculate then return the average value
}
```

1. Write a main() function which declares several arrays, and passes these to the calc_average() function for testing, e.g.

```
float list1[] = { 1.5, 2.6, 10.4, 2, 100.1, 55.2 };
float list2[] = { 11.2, 6.62, 65.1, 104.2, 10.3  };
float list3[] = { 12.65, 27.96, 11.4,  18.6, 1000.2, 10, 20, 50.2 };
// call calc_averages() for each (passing element count)
// then output the result
```

For each call, you must write code to calculate the number of elements to be passed to the 'count' parameter.

1. Compile and run the program, and ensure it outputs the averages as expected. Do you know why the size of the array has to be passed to calc_averages() as a parameter? Why could this not be calculated within the function itself?

**2\. Using Pointers**

Write a C program (called pointers.c) that contains a main() function, which has the following behaviour.

1. Declare an integer type variable called 'count' and initialise to 0.
2. Declare two pointer type variables, called ptr_c1 and ptr_c2, which both reference the 'count' variable.
3. Print out the value of the 'count' variable to the screen e.g. "Count is 0"
4. Change the value referenced by ptr_c1 to 10 (using dereferencing).
5. Print out the value of the 'count' variable to the screen again.
6. Increment the value referenced by ptr_c2 by one (using the ++ operator). Be Careful not to increment the pointer value itself!
7. Print out the value of the 'count' variable to the screen again.
8. Compile and run the program. Each time 'count' is printed, its value should change. Can you explain why this is the case?

**3\. Displaying Command Line Arguments**

When a program is run from the command line, any values present after the program name are passed to the main() function using two parameters. Hence, the main() function of most C programs is usually declared as follows -

```
int main(int argc, char *argv[]) {
   // program code
}
```

The argc parameter is passed the total number of arguments present on the command line, including the program name itself. The argv parameter (which is an array of pointers to char) contains the actual characters within each value. i.e. it is a list of strings.

For example, if a program was run as follows from the command line:

```
./my_prog hello there
```

Then argc would be set to 3, and argv would be set to "my_prog", "hello", "there"

This mechanism is used by most programs to allow argument values to be passed into a program when it is launched, thus allowing customisation of the behaviour of the program based on user input.

Now you are aware of this mechanism, complete the following tasks.

1. Write a C program (called display_args.c) which when executed prints out any command line arguments passed to the main() function, formatted as follows -

```
 Number of Argument present = <arg_count>
 Argument 1: <arg1_value>
 Argument 2: <arg2_value>
 …etc
```

1. Compile and run the program a few times, passing in different values after the program name. Ensure that these argument values are displayed as expected, e.g.

```
./display_args jan feb march
Number of Argument present = 4
 Argument 1: display_args
 Argument 2: jan
Argument 3: feb
Argument 4: march
```

**4\. Extra Challenge - only complete once all other solutions are FULLY working and you are very confident with programming**

Write a C program (called str_funcs.c) that has the following behaviour.

1. Write a function called to_uppercase() that when passed a string (as a NULL terminated array of ascii characters), updates all characters within the string to be upper case.
2. Write a function called to_lowercase() that when passed a string, updates all characters within the string to be lower case.
3. Write a function called to_titlecase() that when passed a string, updates all characters within the string to be lower case, except the first letter of each new word, which should be upper case.
4. Write a function called reverse() that when passed a string, updates the contents of the string to be reversed, e.g. "hello" would become "olleh"
5. Write a main() function, which creates several strings, then calls each of the above functions to show they are working as expected.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
