/*
* 10 Practice Questions
* Topic Learned:
* If Else
* Else If
* Short Hand If / Ternary Operator
* Switch
*/

#include<stdio.h>
int main() {

    // Question 1

    printf("1. Basic if-else\n\n");
    int checkNumber;
    printf("Enter a number to check if it's Even or Odd: ");
    scanf("%d", &checkNumber);
    if(checkNumber % 2 ==0) {
        printf("%d is even\n\n", checkNumber);
    } else {
        printf("%d is odd\n\n", checkNumber);
    }

    // Question 2

    printf("2. else if Ladder\n\n");
    int temperature;
    printf("Enter temperature in celcius: ");
    scanf("%d", &temperature);
    if(temperature <= 0) {
        printf("%d is \"Freezing\"\n\n", temperature);
    } else if (temperature > 0 && temperature <= 15) {
        printf("%d is \"Cold\"\n\n", temperature);
    } else if (temperature > 15 && temperature <= 30) {
        printf("%d is \"Warm\"\n\n", temperature);
    } else {
        printf("%d is \"Hot\"\n\n", temperature);
    }

    // Question 3
    
    printf("3. Nested if-else\n\n");
    int toCheckNumber;
    printf("Enter a number to check if +ve, -ve or 0: ");
    scanf("%d", &toCheckNumber);
    if(toCheckNumber > 0) {
        printf("%d is Positive\n\n", toCheckNumber);
    } else if(toCheckNumber < 0) {
        printf("%d is Negative\n\n", toCheckNumber);
    } else {
        printf("The number is Zero\n\n");
    }

    // Question 4

    printf("4. Ternary Operator (Shorthand if)\n\n");
    int numberOne, numberTwo;
    printf("Enter Two numbers with a space between them to check max: ");
    scanf("%d %d", &numberOne, &numberTwo);
    (numberOne > numberTwo)? printf("Max: %d\n\n", numberOne) : printf("Max: %d\n\n", numberTwo); 

    // Question 5

    printf("5. Ternary for Even/Odd\n\n");
    int checkNumberAgain;
    printf("Enter a number to check if it's Even or Odd: ");
    scanf("%d", &checkNumberAgain);
    (checkNumberAgain % 2 == 0) ? printf("%d is even\n\n", checkNumberAgain) : printf("%d is odd\n\n", checkNumberAgain);

    // Question 6

    printf("6. switch for Arithmetic Operations\n\n");
    int firstNumber, secondNumber, calculate;
    char operation;
    printf("Enter the First Number: ");
    scanf("%d", &firstNumber);
    getchar();
    printf("Enter the Operation to Perform: ");
    scanf("%c", &operation);
    printf("Enter the Second Number: ");
    scanf("%d", &secondNumber);
    switch(operation) {
        case '+':
            printf("%d + %d = %d\n\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%d - %d = %d\n\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%d * %d = %d\n\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%d / %d = %d\n\n", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        case '%':
            printf("%d %% %d = %d\n\n", firstNumber, secondNumber, firstNumber % secondNumber);
            break;
        default:
            printf("Wrong Operation!\n\n");
        }

    // Question 7

    printf("7. switch with Characters\n\n");
    char vowel;
    printf("Enter a lower case vowel(a,e,i,o,u): ");
    scanf(" %c", &vowel);
    switch(vowel) {
        case 'a': 
            printf("Uppercase of a: %c\n\n",65);
            break;
        case 'e': 
            printf("Uppercase of e: %c\n\n",69);
            break;
        case 'i': 
            printf("Uppercase of i: %c\n\n",73);
            break;
        case 'o': 
            printf("Uppercase of o: %c\n\n",79);
            break;
        case 'u': 
            printf("Uppercase of u: %c\n\n",85);
            break;
        default:
            printf("Invalid Input!\n\n");
        }
    
    // Question 8

    printf("8. Combined if-else and switch\n\n");
    int year;
    printf("Enter an Year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("%d is a leap year\n\n", year);
    } else {
        printf("%d is not a leap year\n\n", year);
    }

    // Question 9

    printf("9. Ternary for Sign Check\n\n");
    int signCheck;
    printf("Enter a value to check if +ve or -ve: ");
    scanf("%d", &signCheck);
    (signCheck > 0) ? printf("%d is Positive Number\n\n", signCheck) : printf("%d is Negative Number\n\n", signCheck);

    // Question 10 

    printf("10. Complex switch with Ranges\n\n");
    int score;
    printf("Enter Student Score: ");
    scanf("%d", &score);
    switch(score % 10) {
        case 9: 
            printf("Grade A\n\n");
            break;
        case 8: 
            printf("Grade B\n\n");
            break;
        case 7:
            printf("Grade C\n\n");
            break;
        default:
            printf("Fail\n\n");
    }
    
    return 0;
    
}