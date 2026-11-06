/**
 * A program to demonstrate use of dynamic memory allocation and a linked-list
 *
 * @author Mark Dixon
 */

#include <stdio.h>
#include <stdlib.h>

// A structure for storing information about a stock item
struct stock_item
{
    int id;
    float price;
    unsigned stock_level;
};

struct element
{
    struct stock_item item; // the stock item
    struct element *next; // ptr to next elemtn on the list
};

/**
 * Creates and adds a stock item element to a linked list
 *
 * @param element an element within the list, can be NULL to indicate an empty list
 * @param item the item to be added
 * @return the newly added element
 */
struct element* add_stock_item(struct element *element, struct stock_item item)
{
    struct element *new_element = malloc(sizeof(struct element)); // allocate memory for the element
    new_element->item = item; // copy item member (using -> to deference the ptr)
    new_element->next = element; // set next value to point at existing element

    return new_element;
}

/**
 * Clears the contents of the list, starting at the given element
 *
 * @param element the first element of the list
 */
void clear_stock_list(struct element *element)
{
    // allocate memory for the element
    while (element)
    {
        // get 'next' element, prior to freeing memory
        struct element *next = element->next;
        free(element); // deallocate the memory
        element = next; // move to next element
    }
}

void print_stock_list(struct element *element)
{
    while (element)
    {
        struct stock_item item = element->item; // get the next item
        printf("Stock ID : %d, price: %.2f, level : %u\n", item.id, item.price, item.stock_level);
        element = element->next; // move to next element
    }
}


int main(int argc, char *argv[])
{
    // a variable which refers to the 'head' of the list
    struct element *head = NULL;

    // add stock items
    head = add_stock_item(head, (struct stock_item){1, 1.45, 1000});
    head = add_stock_item(head, (struct stock_item){2, 2.55, 500});
    head = add_stock_item(head, (struct stock_item){3, 4.55, 200});

    // use the list in someway..............
    print_stock_list(head);

    clear_stock_list(head);  // free the list contents once done
    head = NULL;    // set head to NULL for safety!
}

