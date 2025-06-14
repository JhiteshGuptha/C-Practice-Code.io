/*
* 10 Practice Questions
* Topic Learned:
* While Loop
* Do While Loop
* For loop
* Nested For Loop
* Break / Continue in For Loop
* Break / Continue in While Loop
*/

#include<stdio.h>
#include<math.h>
int main() {

    // Question 1

    printf("1. Sum of Numbers\n\n");
    int sumNumbers, sum = 0;
    printf("Enter a value until where you want to find the sum: ");
    scanf("%d", &sumNumbers);
    for(int i = 0; i <= sumNumbers; i++){
        sum = sum + i;
    }
    printf("The sum of first %d numbers is: %d\n\n", sumNumbers, sum);

    // Question 2

    printf("2. Factorial with while\n\n");
    int number, factorial, i = 1;
    printf("Enter a Number to find Factorial: ");
    scanf("%d", &number);
    factorial = number;
    while (i < number){
        factorial = factorial * i;
        i++;
    }
    printf("The factorial of %d is: %d\n\n", number, factorial);

    // Question 4

    printf("4. Skip Even Numbers\n\n");
    for (i = 1; i<= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d\t", i);
    }
    printf("\n\n");

    // Question 5

    printf("5. Nested for Loop Pattern\n\n");
    for (int i = 1; i < 6; i+=2){
        if(i == 1){
            printf("  ");
        } else if( i == 3){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c", '*');
        }
        printf("\n\n");
    }

    // Question 6

    printf("6. Break on Negative Input\n\n");
    int breakInput;
    printf("Enter Integer value: ");
    scanf("%d", &breakInput);
    while(breakInput > 0){
        scanf("%d", &breakInput);
        if(breakInput < 0){
            break;
        }
    }

    // Question 7

    printf("7. Multiplication Table\n\n");
    for(int i = 1; i <= 10; i++){
        printf("5 x %d = %d\n", i, 5*i);
    }
    printf("\n\n");
    
    // Question 8

    printf("8. Prime Check with for Loop\n\n");
    int prime;
    printf("Enter a value to check if it's prime or not: ");
    scanf("%d", &prime);
    for (i = 2; i <= sqrt(prime); i++){
        if(prime % i == 0){
            printf("%d is not a prime number\n\n", prime);
            break;
        } else {
            printf("%d is a prime number\n\n", prime);
            break;
        }
    }

    // Question 10

    printf("10. Continue in Nested Loop\n\n");
    for (int i = 1; i < 11; i++){
        if(i == 5){
            continue;
        }
        printf("%d\t", i);
    }
    






}