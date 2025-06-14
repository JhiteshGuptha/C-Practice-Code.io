/*
* 10 Practice Questions
* Topic Learned:
* Input using scanf()
* Taking multiple input with scanf() and getchar()
*/

#include<stdio.h>
int main() {

    // Question 1

    printf("1. Single Integer Input\n\n");
    int numberInput;
    printf("Enter an Integer: ");
    scanf("%d",&numberInput);
    printf("The number you entered is: %d\n\n", numberInput);

    // Question 2

    printf("2. Multiple Inputs in One Line\n\n");
    int multipleInputOne, multipleInputTwo, multipleInputThree;
    printf("Enter three integers[Give spaces between Input]: ");
    scanf("%d %d %d", &multipleInputOne, &multipleInputTwo, &multipleInputThree);
    printf("The Three Entered Inputs are: %d %d %d\n\n", multipleInputOne, multipleInputTwo, multipleInputThree);

    // Question 3
    
    printf("3. Mixed Data Types\n\n");
    int mixedInputOne;
    float mixedInputTwo;
    char mixedInputThree;
    printf("Enter a Integer, Float & character[Give spaces between Input]: ");
    scanf("%d %f %c", &mixedInputOne, &mixedInputTwo, &mixedInputThree);
    printf("The Three Entered Inputs are: %d %.2f %c\n\n", mixedInputOne, mixedInputTwo, mixedInputThree);

    // Question 4

    printf("4. Reading a String\n\n");
    char sentence[50];
    printf("Enter a single word sentence: ");
    scanf("%s", &sentence);
    printf("You entered: %s\n",sentence);
    return 0;

    // Question 5

    printf("5. Handling Characters with getchar()\n\n");
    printf("Enter the first character: ");
    int characterOne = getchar();
    
    
}


