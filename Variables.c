/*
* 10 Practice Questions
* Topic Learned:
* Variables
* Format specifiers to output variables
* Datatypes
* Ascii Values to display Character
* Decimal Precision
* Type Conversion [Implicit and Explicit]
* Constants
*/

#include<stdio.h>

#define GRAVITY 9.8 // Question 6

int main() {

    // Question 1

    printf("1. Basic Variable Output\n\n");
    int year = 2025;
    float price = 20.5;
    char star = '*';
    double weight = 165.283846;
    printf("Year is %d\n", year);
    printf("Price is %f\n", price);
    printf("Star is %c\n", star);
    printf("weight is %lf\n\n", weight);

    // Question 2

    printf("2. ASCII Character Conversion\n\n");
    printf("ASCII Value: %d\n", 'A');
    printf("Character of 97: %c\n\n", 97);

    // Question 3

    printf("3. Decimal Precision Formatting\n\n");
    float pi = 3.1415926535;
    printf("Value of Pi: %.3f\n\n",pi);

    // Question 4

    printf("4. Implicit Type Conversion\n\n");
    int a = 5;
    float b = 2.5;
    printf("The Division is: %f\n\n", a/b);
    // The datatype of result is float.
    // one of the operand is a floating value, hence floating-point division

    // Question 5

    printf("5. Explicit Type Casting\n\n");
    float num = 7.8;
    printf("Original: %.1f\n", num);
    int num_casted = (int) 7.8;
    printf("After Casting: %d\n\n", num_casted);

    // Question 6

    printf("6. Constants and Calculations\n\n");
    int mass = 10;
    printf("Force = %.0f\n\n", mass*GRAVITY);

    // Question 7

    printf("7. Mixed Data Type Operations\n\n");
    char c = 'B';
    int x = 10;
    int result = printf("%d\n\n", c*x);
    
    // Question 8

    printf("8. Format Specifiers for Hex/Octal\n\n");
    int value = 255; 
    printf("%x\n", value);
    printf("%o\n\n", value);

    // Question 9

    printf("9. Implicit vs Explicit Casting\n\n");
    printf("Integer Division: %d\n", 9/2);
    float division = (float) 9/2;
    printf("Floating Point Division: %.2f\n\n", division);

    // Question 10

    printf("10. Combined Type Conversion\n\n");
    int p = 10;
    float r = 3.5;
    char letter = 'C';
    int rInt = (int) 3.5;
    int computeResult = ((p + rInt) * letter);
    printf("The Final result is: %d\n\n", computeResult);
    
    return 0;

}