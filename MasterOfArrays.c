#include <stdio.h>

/// Arrays
// This is a string: "Hello World"
// To store it we need to use character array like `char name[20];` which is character array of 20 characters
// NOTE: In a character array of 20 characters we can only store 19 characters since the last value is null terminator '\0'.
/// NULL Terminator
// Every array has NULL terminator at the last value which is symboled as '\0'. This is used to terminate the array to avoid injections

int main() {
    char chars[20]; // Character array of 20 characters (including NULL terminator)

    printf("Input characters: ");
    scanf("%19s", chars);
    //    ^^^^^^ Store only 19 strings
    //            ^ Address-of-operator (pointer) is not needed since the arrays are automatically editable in the function

    printf("Your input is: %s\n", chars);

    return 0;
}