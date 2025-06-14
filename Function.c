/*
* 10 Practice Questions
* Topic Learned:
* Syntax 1:Function Prototype
* Syntax 2:Function definition
* Syntax 3:Function call
* Combining Syntax1,2,3
* Taking input and printing with Function
* Function Properties
* Writing Function first and Main() next 
* Writing Main() first and function next
* Return Types in Function: return 0, return 1
* User defined function: Void, int, float/double, char
* Function Parameter
* Scope in function: local and global
*/

#include<stdio.h>

int count = 5; // Question 4 global variable

int value = 10; // Question 10 global variable

// Question 1

void greet() {
    printf("Hello World!\n\n");
}

// Question 2

int add(int a, int b){
    return a + b;
}

// Question 3

float multiply(float x, float y){
    return x * y;
}

// Question 4

void updateCount(){
    count = count + 1;
    printf("Updated Count: %d\n\n", count);
}

// Question 5

void printNumber(int num){
    printf("The value of num: %d\n\n", num);
}

// Question 6

int square(int n); // Prototype

// Question 7

int isEven(int num){
    if(num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

void checkEven(int num){
    if(isEven(num)) {
        printf("%d is Even\n\n", num);
    } else {
        printf("%d is Odd\n\n", num);
    }
}

// Question 8

int isPositive(int num){
    if(num > 0){
        return 1;
    } else {
        return 0;
    }
}

// Question 9

char getGrade(int score){
    if(score >= 90){
        return 'A';
    } else if(score >= 80 && score < 90){
        return 'B';
    } else {
        return 'F';
    }
}

// Question 10 

void changeValue(){
    printf("After Value: %d\n\n", value + 10);
}

int main() {

    // Question 1

    printf("1. Basic Function Structure\n\n");
    greet();

    // Question 2

    printf("2. Return Type and Parameters\n\n");
    int firstInteger, secondInteger;
    printf("Enter first integer to find sum: ");
    scanf("%d", &firstInteger);
    printf("Enter second integer to find sum: ");
    scanf("%d", &secondInteger);
    printf("%d + %d = %d\n\n", firstInteger, secondInteger, add(firstInteger, secondInteger));

    // Question 3

    printf("3. Function with Float Return\n\n");
    printf("Float Return Result: %.1f\n\n", multiply(3.5, 2.0));

    // Question 4

    printf("4. Global vs Local Scope\n\n");
    updateCount();

    // Question 5

    printf("5. Void Function with Parameter\n\n");
    int num;
    printf("Enter a value of num to print: ");
    scanf("%d", &num);
    printNumber(num);

    // Question 6

    printf("6. Function Prototype Placement\n\n");
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);
    printf("%d * %d = %d\n\n", n,n,square(n));

    // Question 7

    printf("7. Multiple User-Defined Functions\n\n");
    int number;
    printf("Enter a number to check if Even or Odd: ");
    scanf("%d", &number);
    checkEven(number);

    // Question 8

    printf("8. Return 0 or 1 for Status\n\n");
    int newNumber;
    printf("Enter a number to check if +ve or -ve: ");
    scanf("%d", &newNumber);
    if(isPositive(newNumber)){
        printf("%d is Positive\n\n", newNumber);
    } else {
        printf("%d is Non-Positive\n\n", newNumber);
    }

    // Question 9

    printf("9. Character Return Type\n\n");
    int score;
    printf("Enter Student Score: ");
    scanf("%d", &score);
    printf("Grade is: %c\n\n",getGrade(score));

    // Question 10

    printf("10. Modify Global Variable in Function\n\n");
    printf("Before Value: %d\n", value);
    changeValue();

    return 0;
}

// Question 6

int square(int n){
    return n * n;
}