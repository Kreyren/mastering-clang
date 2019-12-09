NOT TO BE USED FOR TRAINING! just some idiot on the internet making this so that he can use it for his own training

# Cheatsheet

C programming is statically typed programming language

Statically = What type of variable is when it is declared
```c
// a can only store interage -> Static
int a = 10;
```

Dynamically typed language is ...

---

## Data types

### Identificators
In our example we are using identificator `identificator` which:
- can be `abcefghijklmnopqrstuvwxyzABCDEFGHCIJKLMNOPQRSTUVWXYZ_0123456789` (?)
    - It can NOT start with a number! -> `5cats` is illegal, but `cats5` is legal (?)

<!-- QA: Why is this standard? -->
- Standard method to write identificators is to use camel case -> somethingIsCool (notice that first letter is lowercase)

### Interage
```c
int identificator = 10;
```

### Double
Double is 64-bit number

```c
double identificator = 10.5; // Allows to store decimal
//           ^^ decimal
```

### Float
Float is 32-bit number

```c
float identificator = 10.5;
```

### Unsigned
Means that only positive numbers can be stored

### Character
```c
char identificator = 'a'; 
```

### Character array
```c
char identificator[] = "char "
```

### Boolean
Stores true or false
```c
#include <stdbool.h> // Has to be declared otherwise compiler won't recognize booleans
bool identificator = false;
```

---

## Implicit vs Explicit type casting convertions

Implicit type casting are converted automatically by the compiler

Explicit type casting has to be specified to be converted.

### Implicit type conversion
```c
int zero = .999999; // Storing decimal value in interage variable
```

This gets converted in `zero = 0` and compiler will output a warning

Since this is implicit type -> The compiler will convert this automatically.

<!-- Why do i need to know this? -->

### Explicit type casting
```c
int slice = 17; 
int ppl = 2;
double slicesPerPerson = slices / ppl;
```

This results in an output of `8.000000` (because the actual values are stored as interage) where 17 devided by 2 is 8.5

```c
int slice = 17; 
int ppl = 2;
double slicesPerPerson = (double) slices / ppl;
//                       ^^^^^^^^ We are casting interage slice into a double (using unary operator) -> Explicit type casting
```

This results in an output of `8.500000`

---

## Sidenote
TODO: Rewrite to make sence
```c
// Storing double using interages
double identificator = (25 / 2) * 2; // results in 24.0 (unexpected)
double identificator = (25 / 2) * 2.0; // results in 24.0 (unexpected)

// Storing double as double
double identificator = (25.0 / 2) * 2; // results in 25.0
double identificator = (double) 25.0 / 2 * 2.0; // results in 25.0
//                      ^^^^ Sets the right side on double (?)
```

---

## Operators
There is SHIT TON OF OPERATORS

src: https://en.cppreference.com/w/c/language/operator_precedence

Operators are used to create an expression
```c
// This is binary operator becuase plus has two operands
init x = 5 + 5;
//       ^^^^^ - Expression
//       ^   ^ - Operands
```

There are unary, binary and tonary operators
- unary = Works on one operand
- binary = Works on two operands
- tonary = Works on three operands

### Comparison Operators
`==` = Equal
`!=` = Not Equal
`<` = Left is smaller then right
`>` = Left is bigger then right
`<=` = Left is smaller or equal to right
`>=` = Left is bigger or equal to right

### Aritmetical operators (math)
`+` = Addition
`-` = Substraction
`/` = Division
`*` = Multiplication
`%` = Modules (reminder of interage devision)

```c
// 10 devided by 3 and whatever is left is set as x (results in 1)
int x = 10 % 3;
```

#### Unary minus
```c
int x = 5;
int y = -x;

// x is 5
// y is -5
```

#### Increments
```c
// `a++;` is same as `a = a + 1;`
a = 5;
b = 5;
b = a++;
//   ^^ - this is evaulated after variable 'a'

// a is 5
// b is 6
```

### Pre-Increments
```c
b = 5;
a = 5;
b = ++a;
//  ^^ this is evaulated prior to variable 'a'

// b is 6
// a is 6
```

### Assignment operators
These alter the original value
`=` = 
`+=` = 
`/=` =
`*=` =
`%=` =

```c
int a = 10
int a += 1; // Increments the variable 'a' by '1' -> 11 
int a *= 2; // Increments the variable 'a' by '2' -> 20
int a /= 2; // Increments the variable 'a' by '2' -> 2
int a %= 3; // Increments the variable 'a' by '3' -> 1
```

### Logical operators
`&&` = AND
`||` = OR
`!` = Negate

## Conditional operator
`?` = 
`:` = 

## Precidences
Precidences decide which operators happens first https://en.cppreference.com/w/c/language/operator_precedence
```c
int x = 2 * 3 + 3; 
//      ^^^^^ - This happens first -> 2 times 3 plus 3 = 9
init y = 2 * (3 + 3);
//           ^^^^^^^ - This results in 2 times 6 = 12
```

---

## Logic
By default the expression is evaulated from left to right
```c
if (true && false || true) ...
// expression true && false is evaulated first by default (from left to right)
```

```c
if(expression)
{
    // Executes if expression is true
    action
else if(expression2) {
    // Executes if expression is false and expression2 is true
    action
else if(!(expression2)) {
    // Executes if expression2 is false
} else
{
    // Executes if nether of above is true
    else-action
}
```

#### One-line if statement 
Prown to syntax errors
```c
if (age < 150) printf("%s\n", "You might be alive");
```

#### Switch statement
Basically case statements in bash/shell

```c
int menuChoice = 2;

switch(menuChoice)
{
    case 0:
        printf("%s\n", "Case 0");
        break;
    case 1:
        printf("%s\n", "Case 1");
        break;
    case 2:
        printf("%s\n", "Case 2");
        break;
    default:
        printf("%s\n", "Case default");
}
```

Break is important otherwise it will execute all other cases alike:
```c
int menuChoice = 0;

switch(menuChoice)
{
    // This is going to execute case 0 then case 1, case 2 and default.. -> Use `break;`
    case 0:
        printf("%s\n", "Case 0");
    case 1:
        printf("%s\n", "Case 1");
    case 2:
        printf("%s\n", "Case 2");
    default:
        printf("%s\n", "Case default");
}
```

#### Conditional Operator
```c
double balance = -5000;
balance > 0 ? printf("%s\n", "Something happend!");
//          ^ - If balance is greater then 0 -> something happens
```

---

## Loops
Execute code untill expression is not false

### For loop
```c
// initialization
// comparison
// update

// Print numbers from 0 to 10 (or untill variable i is 10)
for(int i = 0 ; i < 10; i++)
{
    printf("%d", i);
}
```

### While loop
```c
while( i < 20)
{
    printf("%d ", i)
    // code
    i++;
}
```

### Do While loop
```c
// Example used for menus, accepts input only if the expression in while is true
int input;
do
{
    scanf("%d", &input);
} while(input < 0 || input > 9); 
```

---

## Array
Array is collection of data/elements that are all the same type

First element in an array is indexed as 0

Arrays has to be compiled time constant (?)
```c
int ages[8] {1, 2, 3, 4, 5, 6, 7};
// first element - index 0
```
### Multidimensional arrays
```c
int rows = 3;
int const columns = 4;

// Multidimensional array
int studentGrades[][columns] = {
                     {1, 3, 4, 6},
                     {3, 2, 4, 5},
                     {32, 2, 4, 9},
                     };


// For Multidimensional arrays the elements stored in array is usually adressed in a for loops
for( int i =0; i < rows; i++)
{
    for(int j = 0; j < columns; j++)
    {
        printf("%d\n", studentGrades[i][j]);
    }
}

// Returns 1 3 4 6, 3 2 4 5, 32 2 4 9
```

---

## Strings
```c
char name[20]; // Reserve one character for '\0' (NULL terminator)

```

https://youtu.be/1uR4tL-OSNI?t=6524

---

## Functions
```c
#include <stdio.h>

int square(int input)
//             ^^^^^ paramiter
{
    return input * input
}

int main()
{
    int x = 5;
    int xSquared = square(x);
    //                    ^ argument

    printf("%d\n", xSquared);
    return 0;
}
```
---

Interage (int) == ?

Strings

Arrays

References https://youtu.be/1uR4tL-OSNI

https://www.calebcurry.com/c-programming-crash-course-3-hours/