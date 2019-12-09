#include <stdio.h>

// User input

int main() {
    int first;

    // TODO: If character is parsed the program returns numbers?

    // Instruct end-user
    printf("Give me a number: "); // TODO: Sanitize

    // Scan for arguments
    scanf("%d", &first);
    //          ^ Address-of-operator (pointer) -> Allows storing the data in variable

    printf("You choosed the value %d\n", first);
}