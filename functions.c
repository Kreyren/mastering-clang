#include <stdio.h>

int square(int input)
//             ^^^^^ paramiter
{
    return input * input;
}

int cube(int input)
{
    int x = input * input * input;
//  ^^^^^ This exists only in the cube function
    return x;
}

int power(int input, int exponent)
{
    int total = 1;

    for(int i = 0; i < exponent; i++)
    {
        total *= input;
    }

    return total;
}

// Recursive function
int recursivePower(int input, int exponent)
{
    // Basecase 
    if(exponent < 1)
    {
        return 1;
    }

    return input * recursivePower(input, exponent-1);
}


// Void functions can NOT return a value
void changeVal(int *input)
{
    *input = 900000;
}

int main()
{
    int x = 5;
    // int xSquared = square(x);
    // //                    ^ argument

    // printf("%d\n", xSquared);

    // int xTo5 = power(x, 4);
    // printf("%d\n", xTo5);

    // int recursive = recursivePower(5, 5);
    // printf("%d\n", recursive);

    changeVal(&x);
    printf("%d\n", x);
    return 0;
}