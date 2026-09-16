# Introduction to Computer Programming

## 10 File Handling

**1\. Reading from a Text File**

1. Write a C program (called textreader.c) which asks the user for the name of a file to load. You may use the following code, to ensure the newline character is not stored within the entered filename -

```
const unsigned MAX_FILENAME = 256;
char filename[MAX_FILENAME];
fgets(filename, MAX_FILENAME, stdin);
filename[strlen(filename)-1] = '\0'; // replace \n with 0
```

1. Once the user enters a file name, an attempt should be made to open (as a text file) and load the file contents, then display these to the screen. If the file does not exist, then this should be reported. Ensure the file is closed before the program terminates.
2. Extend the program so that if an additional argument is passed when the program is run from the command line, then this name is used as the filename, and the user is not prompted to enter a value. e.g.

```
 ./textreader.c file1.txt
```

**2\. Copying and Filtering a Text File**

1. Write a C program (called textcopy.c) which asks the user for the name of a file to load. Once the user enters a file name, the named file should be opened as a text file. The contents of the file should be copied line by line into a destination file (called copy.txt). If the destination file already exists, then it's contents should be replaced. You can assume no line in the file will exceed 256 characters in length.
2. Enhance the program so that when lines are being copied, any empty lines are not copied into the destination copy.txt file. Also ensure any lines over 25 characters in length are also not copied.
3. Extend the program even further, so that if any additional arguments are specified when the program is run, then these named files are opened and also copied into the destination file, with the same filtering rules being applied as above. The final destination file should contain a concatenation of all the named input files' content.

**3\. Creating a Logging function**

1. Write a C program (called logger.c) that contains a function called log_info(char msg\[\]) which when called appends the given message value to the end of a file called log.txt. If the file does not exist it should be created. If the file already exists, then the existing content should never be overwritten. Every logged message should appear on a separate line in the file.
2. Add a main() function which calls the log_info() function several times for testing purposes. Run the program multiple times and confirm the log.txt file continues to log messages, without removing earlier content which was added.
3. Enhance the log_info() function, so that each message is followed with the date and time the message was logged., e.g. &lt;msg. : <date/time&gt;

**4\. Extra Challenge - only complete once all other solutions are FULLY working and you are very confident with programming**

Write a C program (called stock_serialize.c) which has the following behaviour -

1. Define a structure as follows -

```
struct stock_item {
   unsigned id;
   float unit_cost;
   unsigned stock_level;
};
```

1. Create an array (called stock_items) capable of storing up to 100 stock items. Write a function called add_stock_item() which allows new stock items to be added to the array. _Hint:_ you will need a variable to count how many items have been added to the array.
2. Add a function called print_stock_items() which displays all currently stored stock items to the console.
3. Add a function called save_stock_items(char filename\[\]) which stores the stock items within a binary file, using the passed filename.
4. Add a function called load_stock_items(char filename\[\]) which loads the stock items from a binary file, updating the values stored in the array, along with the count of how many items exist within the array.
5. Write a main() function that adds a number of stock items to the array (at least 10), then writes these to a file using the save_stock_items() function. Clear the contents of the array, then load these items back into the array using a call to the load_stock_items() function. Ensure the items have been loaded correctly by calling the print_stock_items() function.
6. Add a function called reduce_stock_level(char filename\[\], unsigned pos) which opens a file, locates and loads the stock item at the given position, reduces the stored stock level, then updates that stock item entry within the file. _note:_ this should be done by directly accessing the record within the file, and not sequentially loading each record until the desired position is reached.
7. Update the main() function and call the reduce_stock_level() function several times. Reload the stock items (using load_stock_items function), then print them to confirm the stock levels have been updated as expected.

Think you're finished with these? Edit each of the above programs so they include comments. Include a multi-line comment at the top of each program describing its basic purpose. Also add some single line comments within the code itself saying what the statements actually do. Show your solutions to the tutor.
