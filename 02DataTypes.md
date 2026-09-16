# Introduction to Computer Programming

## 02 Data types and operators

**1\. Types and expressions**

1. Write a C program (called calc.c) that contains two int type variables, one called **total** and another called **count**
2. Initialise **total** to be 10 and **count** to 3
3. Write a simple expression which divides **total** by **count**, and assigns the result to a variable called **average** (of type float), using -

```
float average = total/count;
```

1. Print the result to the screen using the following statement -

```
printf("average = %f\n", average);
```

Is that answer correct?

1. Update the type of **count** to be a **float** instead of an **int**, and run the program again. What effect did this have on the result? Can you work out why this happens?

**2\. Using Basic types**

1. Write a C program (called type_demo.c) that creates four variables. Call them total, pi, letter and name.

**total** should store whole numbers only, and be initialised to -1

**pi** should store the value 3.142 (and be explicitly initialised using a single-precision floating point number)

**letter** should store the character 'M'

**name** should store your own name as text.

1. Add statements to print each of these values to the screen. note: **%c** is the format specifier required to print a character when calling printf()
2. Add another variable called **letter2**, which stores the character 'A'. But initialise this using a decimal number (rather than using a character literal).
3. Add another variable called **letter3**, which stores the character 'B'. But initialise this using a hexadecimal number (rather than using a character literal).
4. Add more print statements to output **letter2** and **letter3** to the screen also.
5. Can you update the code, so when **pi** is printed it only shows 3 decimal places?

**3\. Data Type Ranges**

1. Write a C program (called ranges.c) that creates and initialises a variable called counter or type **int**. Set the value to 0 and print the value of counter to the screen , using

```
printf("counter = %d\n", counter);
```

1. Modify the above program so that the value stored by counter is reduced by 1 (i.e. take one away from the counter variable) prior to it being printed. Run the program again and note the result, this should not really be a surprise.
2. Now add a second print statement containing the following -

```
printf("counter now = %u\n", counter);
```

1. Run the program again and notice what has happened to the second output value, why do you think this has occurred? From the value printed, can you determine how many bits are used to store an int on the machine you are using?

**4\. Relational Operators**

1. Write a C program (called rel_ops.c) that contains the following four lines of code-

```
printf("The result of the expression 10 < 5 is %d\n", (10 < 5));
printf("The result of the expression 10 < 12 is %d\n", (10 < 12));
printf("The result of the expression 10 <= 9 is %d\n", (10 <= 9));
printf("The result of the expression 10 <= 10 is %d\n", (10 <= 10));
```

1. Run the code and notice the output. Notice how the value **1** represents **true**, and **0** represents **false**.
2. Write more statements (in the same fashion as the ones provided) to demonstrate the results of each of the other available **relational** operators, i.e. >, >= , == and !=

**5\. Assignment Operators**

1. Write a C program (called assign_ops.c) that contains the following code-

```
int count = 1;
count = count + 1;
count = count * 10;
count = count - 2;
count = count / 2;
count = count % 5;
printf("Final result is %d\n", count);
```

1. Run the program and note the results. Now update the code so each expression is replaced with the equivalent **assignment operator** type expression. Run the code again and make sure the result is the same.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
