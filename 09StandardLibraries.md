# Introduction to Computer Programming

## 09 The Standard Library

**1\. Using the standard utilities library (stdlib.h)**

Write a C program (called assignment_p1.c). Add a main() function which asks the user to input a number value. Convert the input string value to an int type, then generate a random number between 0 and the given value. Print this to the screen, as in the following example -

```
 Enter a number: 10
The number entered was 10, and the random value generated was 8
```

note: the random number generator should be suitably seeded to ensure the program does not pick the same random number each time it is executed.

**2\. Using the mathematical support library (math.h)**

Write a C program (called assignment_p2.c). Add a main() function which asks the user to input a decimal number (which may include a decimal place), Once the user inputs the value, convert this to a double type, then display the same information as the example below, using functions from the math.h library.

```
Enter a decimal number : 4.253
Rounded: 4.000000
Ceiling: 5.000000
Floor: 4.000000
Square root: 2.062280
Number squared: 18.088009
Log2: 2.088481
Sine: -0.896324
Cosine: -0.443401
```

**3\. Using the string manipulation library (string.h)**

Write a C program (called assignment_p3.c). Within the main() function add code to do the following -

1. Ask the user to input a string (of max 50 characters), e.g.

```
Enter a string : Hello this is a secret string
```

1. Print out the number of characters within the input string, e.g.

```
String length = 29
```

1. Check if the word "secret" is contained within the string, if so print the position index of the first character to the screen e.g.

```
The word 'secret' is contained at index position 16
```

If "secret" is not contained within the string, then the following message should be shown -

```
The word 'secret' is not present within the string
```

**4\. Using the character manipulation library (ctype.h)**

Write a C program (called assignment_p4.c). Add a main() function which asks the user to input a string value, then display the same information as the example below, using functions from the ctype.h library.

```
 Enter a sentence : Hello, this is MY sentence.
 Number of spaces: 4
Number of punctuation characters: 2
Number of uppercase characters: 3
Number of lowercase characters: 18
Number of digits: 0
 Sentence in uppercase: HELLO, THIS IS MY SENTENCE.
Sentence in lowercase: hello, this is my sentence.
```
