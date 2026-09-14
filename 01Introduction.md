# Introduction to Computer Programming

## 01 Getting Started

Programming Projects

Complete each of these tasks, discussing your work with your tutor and fellow apprentices. At the end of the exercise you should have a small selection of programs you have written.

**1\. Console Output**

1. Write a C program (called my_name.c) that displays your name to the console. Compile and run the program.
2. Write a C program (called my_details.c) that displays your name, address and phone number on separate lines using three printf() statements. Compile and run the program.
3. Modify the above program, so that it generates exactly the same output, but only using one printf() statement. Compile and run the program.
4. Write a C program (called message.c) that creates a variable called message containing the text "This is an emergency". Write a program which uses this variable to output the following to the console -

```
ALERT : This is an emergency!
```

1. Write a C program (called format.c) that contains the following line of code -

```
 printf("decimal=%d, in hex=%x, as a character=%c", 65,65,65);
```

Compile and run the program, and examine the output. Can you explain why the output generated? You may need to do some research into C printf format specifiers, and also have an understanding of different number bases.

1. Write a C program (called banner.c) that generates (exactly) the following output using three printf() statements -

```
 ////////////\\\\\\\\\\\\
 // This is a "banner" \\
////////////\\\\\\\\\\\\
```

Update the program so that it uses a single printf() statement only.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of the program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do.

**2\. Console Input**

1. Write a C program (called your_name.c) that prompts the user to input their name. Use fgets() to read the user's input, store the input characters in a variable (called name) then output this to the console. For example, your program should behave as follows when running (in this example the user typed 'Mark' as input) -

```
 Please Enter Your Name: Mark
Hello 'Mark', how are you today?
```

What do you notice about the output generated?

Can you improve the program so that it also asks for the user's age, and displays this also?

Think you're finished with this? Edit the program so it includes comments. Include a multi-line comment at the top of the program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do.

**3\. Using Expressions**

1. Write a C program (called eval.c) that contains the following lines of code -

```
int value1 = 10 + 2 * 100;
int value2 = 10 + 2 + 3 - 4;
int value3 = 100/50 * 2;
int value4 = 60 + 40 / 20 + 30 * 10;
```

Following the above code add statements to the program, which output the variable values (i.e. the result of each of these expressions), as a whole number, to the console. Generating output such as -

```
The result of value1 is : 210
```

Compile and run the program and make a note of the results.

Now update the program (by adding parentheses to the expressions) so the results are as follows -

```
value1: 1200
value2: 11
value3: 1
value4: 20
```

Think you're finished with this? Edit the program so it includes comments. Include a multi-line comment at the top of the program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do.

**4\. Extra Challenge**

1. Write a C program (called name_lengths.c) which has the following behaviour -

It prompts the user to enter five user-names, storing each one.

It gets the length of each input name (you may need to look up a function that provides the length of each name to do this) and stores each in a variable.

It prints each input name to the console, followed by a colon (:) and the number of characters in that specific name.

It calculates the average length of the input names and prints out that information to the screen

1. Compile, run and test the program using various test-data, to confirm the correct behaviour according to the above specification.

Think you're finished with this? Edit the program so it includes comments. Include a multi-line comment at the top of the program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do.
