# Introduction to Programming

## Lab Worksheet – User Defined Types



Complete each of these tasks, discussing your work with your tutor and fellow apprentices. At the end of the exercise you should have a small selection of programs you have written.

**1\. Creating and using a struct type**

Write a C program (called stock_control.c) that implements the following -

1. Create a user-defined struct called 'stock_item' that stores an 'id' (as an integer), a 'price' (as a float) and a 'stock_level' (as an unsigned integer).
2. Write a main() function that creates three local variables of type 'stock_item' called item1; item2; and item3 that contain the following values -

item1 : id 10, price 1.56, stock_level 100

item2 : id 11, price 10.99, stock_level 150

item3 : id 12, price 2.55, stock_level 45

1. Write a function called print_stock_item() which takes a stock_item type parameter, which when called outputs the details of the stock item to the console. e.g. output for item1 should be as follows -

```
Stock item ID : 10, price : £1.56, Stock level : 100
```

1. Within the main() function call print_stock_item() three times, passing each of the created local variables. Compile and run the program, and ensure the output looks correct.
2. Write another function called update_stock() which takes a stock_item type parameter and an 'amount' parameter. This function should update the stock_level of the passed stock item, then return an updated version. The signature of the function should be as follows -

```
struct stock_item update_stock(struct stock_item item, int amount)
```

1. Within the main() function call update_stock() several times as follows -

```
item1 = update_stock(item1, 10);
item2 = update_stock(item2, -20);
item3 = update_stock(item3, 18);
```

Then print out the updated stock items, by calling print_stock_item() for each, to ensure they are correctly updated.

1. Can you change the implementation of update_stock() so that the function is implemented with only a single line of code? hint: look at the lecture slides for the C99 syntax allowed when assigning to struct types.

**2\. Creating and using a union type**

Write a C program (called vehicles.c) that implements the following -

1. Create a user-defined union type called 'vehicle_capacity' that contains either a number of 'seats' (as a char), a 'max_weight' (as a float), or a 'max_occupancy' (as an unsigned integer).

These are used to represent the number of seats in a car, or the maximum laden weight of a truck, or the maximum occupancy of a public vehicle (such as a bus/train/ferry).

1. Write a main() function that creates three local variables of type 'vehicle_capacity' called vehicle1; vehicle2; and vehicle3 that contain the following values -

vehicle1 : seats 4

vehicle2 : max_weight 4500.15

vehicle3 : max_occupancy 500

1. Implement three functions, which have the following prototypes -

```
void print_seat_count(union vehicle_capacity capacity)
void print_max_weight(union vehicle_capacity capacity)
void print_max_occupancy(union vehicle_capacity capacity)
```

Each of these should output the following for the above vehicles respectively -

"The number of seats is: 4"

"The maximum weight is: 4500.15kg"

"The maximum occupancy is: 500"

1. Within the main() function make the following calls -

```
print_seat_count(vehicle1);
print_max_weight(vehicle2);
print_max_occupancy(vehicle3);
```

Ensure the output exactly matches the example above for each vehicle.

1. Add the following lines of code to the main() function -

```
print_seat_count(vehicle2);
print_seat_count(vehicle3);
```

Examine the output generated, and notice it is wrong. Can you explain why this is?

1. We can examine the number of bytes used to store values of a specific data type in C using the special sizeof() operator.

To show this working, add the following line of code to your main() function and observe the output -

```
printf("An int uses %ld bytes (on this machine)\n", sizeof(int));
```

1. Add another few calls similar to the above, which show the number of bytes used to store a char; a float; and a double.
2. Finally, add another call which shows the number of bytes used to store a 'vehicle_capacity' union type. What comments can you make about the result?

Try changing the data type of 'max_weight' (to a double), and observe the impact of this.

**3\. Combining structs, unions and enums - only complete once all other solutions are FULLY working and you are very confident with programming**

When using union types it is usually necessary to store some additional information, which allows the program to detect the actual member being currently used (since only one is meaningful at any one time). This is often done using an enum type, which along with the union itself, is wrapped into a struct type. This exercise allows you to practise using these three user-defined types together.

Write a C program (called properties.c) that implements the following features, using a combination of a struct, union and enum.

1. Create a union type called 'council_tax', which contains a 'band' (of type char), an 'amount' (of type float), and a 'rooms' (of type unsigned int).
2. Create an enum type called 'tax_type', which contains the enumeration labels BANDED, DIRECT and CAPACITY. These three labels will be used to identify which member of the 'council_tax' union is currently in use. i.e.

- BANDED indicates the 'band' member is in use,
- DIRECT indicates the 'amount' member is in use, and
- CAPACITY indicates the 'rooms' member is in use.

1. Create a struct type called 'property_item', which contains the following members -

- a 'type' (based on the user-defined 'tax_type' enumerated type),
- a 'tax' (based on the user-defined 'council_tax' union type),
- a 'unique_id' (of type int),
- a 'year_built' (of type unsigned int).

1. Write a function called calculate_tax_amount() which takes a 'property_item' as a parameter, and uses this to calculate and return a tax due amount, using the following rules -

- If the 'type' is BANDED then the base tax is as follows -

'A' : 500

'B' : 800

'C' : 1100

'D' : 1500

- If the 'type' is DIRECT then the base tax is the same as the value stored in the 'amount' member of the 'tax' union.
- If the 'type' is CAPACITY then the base tax is the same as the value stored in the 'rooms' member of the 'tax' union, multiplied by 300.
- If the property was built after 1985, then the returned tax due amount should be 50% of the initial base value.

1. Write another function called print_property_details() which prints information about a given property, including the tax due amount (which it can calculate by calling the the calculate_tax_amount() function. The output should resemble the following example -

```
Property '109' built in 1962, has a council tax amount of £950.18
```

1. Write a main() function which contains the following code. Ensure the user-defined types you have created, and the contained member names etc. are exactly as shown below (i.e. so the code can compile).

```
void main(void)
{
   struct property_item prop1;
   struct property_item prop2;
   struct property_item prop3;
   struct property_item prop4;
   prop1.unique_id = 100;
   prop1.year_built = 1970;
   prop1.type = BANDED;
   prop1.tax.band = 'B';
   prop2.unique_id = 101;
   prop2.year_built = 1982;
   prop2.type = DIRECT;
   prop2.tax.amount = 1020.45f;
   prop3.unique_id = 103;
   prop3.year_built = 1990;
   prop3.type = CAPACITY;
   prop3.tax.rooms = 5;
   prop4.unique_id = 104;
   prop4.year_built = 1984;
   prop4.type = CAPACITY;
   prop4.tax.rooms = 5;
   print_property_details(prop1);
   print_property_details(prop2);
   print_property_details(prop3);
   print_property_details(prop4);
}
```

1. Compile and run the code, and ensure the output is as follows -

Property '100' built in 1970, has a council tax amount of £800.00

Property '101' built in 1982, has a council tax amount of £1020.45

Property '103' built in 1990, has a council tax amount of £750.00

Property '104' built in 1984, has a council tax amount of £1500.00

1. Update the code so typedef's are used, allowing all references to the user-defined types to be made without the prefixes such as struct, union, and enum.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
