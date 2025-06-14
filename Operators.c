/*
* 10 Practice Questions
* Topic Learned:
* Arithmetic Operator
* Comparison Operator
* Logical Operator
* Operator Precedence Order
* Assignment Operator
*/

#include<stdio.h>
int main() {
    
    // Question 1
    
    printf("1. Basic Arithmetic Expression\n\n");
    printf("The result is: %d\n\n", (15 % 4) * 3 + 12 / 2);

    // Question 2

    printf("2. Compound Assignment\n\n");
    int x = 5;
    printf("First Sequence: %d\n", x+=3);
    printf("Second Sequence: %d\n", x*=2);
    printf("Third Sequence: %d\n", x-=4);
    printf("Final Value: %d\n\n", x);

    // Question 3

    printf("3. Logical AND/OR\n\n");
    int a = 7, b = 3, c = 5;
    printf("Result of Evaluation: %d\n",(a > b) && (c <= a) || (b != c));
    printf("If the Result Says 1, the evaluation is True\n\n");

    // Question 4

    printf("4. Operator Precedence\n\n");
    printf("Precedence Result: %d\n\n",5 + 3 * 2 / 4 - 1);

    // Question 5

    printf("5. Comparison Chain\n\n");
    printf("Comaprision: %d\n", (10<15) && (15 <= 15));
    printf("If the Result Says 1, the comaprision is True\n\n");

    // Question 6

    printf("6. Modulo and Division\n\n");
    int resultOne = 27 % 4;
    printf("Reminder: %d\n",resultOne);
    printf("Final Value: %d\n\n", resultOne / 2);

    // Question 7

    printf("7. Boolean Negation\n\n");
    int flag = 0; //False
    printf("Inverse of Flag: %d\n\n", !flag);

    // Question 8

    printf("8. Mixed-Type Assignment\n\n");
    float y = 4.5;
    y *= 2;
    y -= 3;
    printf("Final Value of y: %.1f\n\n", y);

    // Question 9

    printf("9. Complex Expression\n\n");
    int expressionResult = (2 + 3) * 4 == 20 || 10 / 3 != 3;
    printf("Expression Result: %d\n\n", expressionResult);

    // Question 10

    printf("10. Precedence Challenge\n\n");
    int precedenceResult = !(5 > 3 && 2 < 4) || (6 % 4 == 2);
    printf("Precedence Result: %d\n\n", precedenceResult);

}