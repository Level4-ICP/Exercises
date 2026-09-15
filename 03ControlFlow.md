# Introduction to Computer Programming

## Lab Worksheet – Control Flow


Complete each of these tasks, discussing your work with your tutor and fellow apprentices. At the end of the exercise you should have a small selection of programs you have written.

**1\. Using the 'if' statement**

1. Write a C program (called options.c) that contains the following C code -

```
int hourly_pay = 0;
if ( hourly_pay < 100 )
   printf("The hourly pay is less than £100\n");
```

1. Compile and run the program, and ensure it outputs the message as expected. Then change the value of hourly_pay to 100 to ensure the message is NOT output (once compiled and run again).
2. Add another printf() function call, which outputs a second message when the hourly_pay is less than 100, saying "Therefore, you get extra benefits".
3. Run the program a few times, changing the value of the hourly_pay variable, to confirm the program behaves as expected (i.e. it either outputs both messages, or nothing at all).
4. Add an 'else' statement to the above code so that it prints a message saying "The hourly pay is at least £100" when the condition is not true.
5. Run the program a few times, changing the value of the hourly_pay variable, to confirm the program behaves as expected.

**2\. Converting Data Types**

1. Write a C program (called age_check.c) that contains the following C code -

```
char input[100];
int age = 0;
printf("Please enter your age : ");
fgets(input, 100, stdin);
age = atoi(input);
```

1. Try to compile the code (this will probably cause an error). Can you fix this error? Also, can you work out what the function atoi() does?
2. Add an if..else statement that checks whether the age is less than 18, if so output a message saying "you're a minor". If the age is 18 or above, then output a message saying "you're an adult".
3. Compile and run the program a few times, inputting different values when prompted, to confirm the program behaves as expected.

**3\. Using a switch statements**

1. Write a C program (called switch.c) that implements the following if..else code using a **switch** statement as an alternative -

```
char input[100];
printf("Please enter one of the following characters A,B,C,D,E,F : ");
fgets(input, 100, stdin);
char letter = input[0];
if ( letter == 'A' )
   printf("The value of that hexadecimal character is 10\n");
else if ( letter == 'B' )
   printf("The value of that hexadecimal character is 11\n");
else if ( letter == 'C' )
   printf("The value of that hexadecimal character is 12\n");
else if ( letter == 'D' )
   printf("The value of that hexadecimal character is 13\n");
else if ( letter == 'E' )
   printf("The value of that hexadecimal character is 14\n");
else if ( letter == 'F' )
   printf("The value of that hexadecimal character is 15\n");
else
   printf("You did not enter a valid character in the range (A to F)\n");
```

1. Compile and run the program a few times, inputting different values when prompted, to confirm the program behaves as expected.

**4\. Writing a 'while' loop**

1. Write a C program (called count_while.c) that begins with the following code -

```
int count = 10;
```

1. Add a while statement that contains a condition that tests if the count is more than 0. Within the code block associated with the while statement, print a message showing the current value of the count. Also include a line of code which decrements the count value by 1. If this program works as specified the output should look something like the following -

```
count = 10
count = 9
count = 8
count = 7
count = 6
count = 5
count = 4
count = 3
count = 2
count = 1
```

**5\. Writing a 'for' loop**

1. Write a C program (called count_for.c) that implements the above behaviour, but instead of using a while statement, use a for loop.

**6\. Using the ternary operator**

1. Write a C program (called ternary.c) that converts the following code into an equivalent function which uses the **ternary operator** instead of the 'if…else' statements

```
float multAbsValue(float value, float mult)
{
   float result;
   if ( mult < 0 )
       result = value * -mult;
   else
       result = value * mult;
   return result;
}
```

1. Write a main() function which calls the function with various parameter values, then prints out the result, to test if the behaviour is correct.
2. Can you improve the function so that it only contains a single line of code?

**7\. Writing Functions**

Write a C program (called funcs.c) that contains a number of functions that you write yourself, each one as described below.

1. Add the following function -

```
void multi(char message[], int count) {
 // code goes here!
}
```

and complete it, so that it prints the given message out 'count' number of times. (hint: use either a while or a for loop)

1. Write a function that has the following signature -

```
 int max(int val1, int val2);
```

that returns the largest of the two passed parameters. (hint: use an if statement to decide what to return)

1. Write a function that has the following signature -

```
 int min(int val1, int val2, int val3);
```

that returns the smallest of the three passed parameters. Although there are many different solutions to this problem, within your solution, ensure you use multiple if statements and at least one **relational** operator.

1. Write a function that has the following signature -

```
 float area(float radius);
```

that returns the area of a circle that has the specified radius (using 2 x PI x R).

1. Add a main() function which calls each of these functions several times (and prints the output if necessary) to test whether your functions work as expected.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.

**8\. Extra Challenge - only complete once all other solutions are FULLY working and you are very confident with programming**

Write a C program (called person_info.c) that has the following behaviour.

Part1:

1. Ask the user to input the names of up to 10 people (max 50 characters each)
2. If the user types a blank name prior to 10 names being input, then stop inputting names.
3. Once the names have been input, output the name of the person who has the longest name (in terms of number of characters).

Part2: Improve the above solution so that it also satisfies the following -

1. After each name is input, ask the user to input the year the person was born.
2. If the user types in a year that is not a number, or is in the future, then ask them to input the year of birth again.
3. Once the names and year of births have been input, output the name **and age** of the person who has the longest name (in terms of number of characters).
4. Also output the name and age of the person who is the oldest, and the youngest.
5. Also output the average age of all the people input.
6. Ensure your program handles certain conditions, e.g. what if no names are entered? What if a negative year is entered? etc.
