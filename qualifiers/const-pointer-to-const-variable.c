// Qualifiers: const pointer to const variable
// const pointer to const variable is a constant pointer that points to a constant variable.
// The value of the pointer as well as the value of the integer cannot be changed.

// syntax:
//     1. const type* const name;
//     2. type const* const name;

// Example:
//     1. const int* const ptr;
//     2. int const* const ptr;

#include <stdio.h>

int main() {
    // variable declaration and initialization
    int i = 10;
    int j = 20;
    
    // ptr is a constant pointer to a constant
    const int* const ptr = &i;

    // atttempt to change the value of i
    // @todo: uncomment the line below to see the error
    // *ptr = 20; // Error: assignment of read-only location '*ptr'

    // atttempt to change the value of ptr
    // @todo: uncomment the line below to see the error
    // ptr = &j; // Error: assignment of read-only variable 'ptr'
    

    printf("i: %d\n", i); // Output: i: 10  
    printf("j: %d\n", j); // Output: j: 20
    return 0;    
}