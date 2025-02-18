// Write a C program to print address of variable using pointer and access elements
// using pointer 
#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var; // Pointer to the variable

    // Print the address of the variable
    printf("Address of variable 'var': %p\n", &var);
    printf("Address stored in pointer 'ptr': %p\n", ptr);

    // Access the value of the variable using the pointer
    printf("Value of variable 'var': %d\n", var);
    printf("Value accessed using pointer 'ptr': %d\n", *ptr);

    return 0;
}
