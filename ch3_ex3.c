/* Adds two fractions */

/*Header file to include the output and input functions in the program*/
#include <stdio.h>
int main(void)    /*indicates the main() function will not return any value*/
{
     /*declaring variables, where num1,denom1,num2,denom2,result_num,result_denom is a variable and type is int */
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf ("Enter first fraction: ");  /*prints the character to the screen*/
    scanf ("%d/%d", &num1, &denom1);    /*takes the input from the user*/

    printf ("Enter second fraction: ");
    scanf ("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; /*stores the input values to the variables*/
    result_denom = denom1 * denom2;
    printf ( "The sum is %d/%d\n", result_num, result_denom); /*prints the result with 2 arguments */

    return 0;  /*the function does not return any value*/
}
