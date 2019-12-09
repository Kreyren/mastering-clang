#include <stdio.h>

// Reference for converstion characters (?)

int main() {
    // Using %s to output a string
    printf("%s\n", "Hello World");
    //     ^^^^^^   ^^^^^^^^^^^
    //     Pattern    String

    // Using %d to output variables
    int x = 50;
    int y = 100;
    printf("X: %d\n", x);
    printf("X: %d, Y: %d\n", x, y);

    // Exit
    return 0;
}