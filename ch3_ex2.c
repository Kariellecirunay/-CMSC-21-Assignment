/* Prints int and float values in various formats */

/*Header file to include the output and input functions in the program*/
#include <stdio.h>
int main(void) /*indicates the main() function will not return any value*/
{
    int i;     /*declaring variables, where i is a variable and type is int */
    float x;   /*declaring variables, where x is a variable and type is float */

    i= 40;     /*assigning variables to i and x*/
    x= 839.21f;

    /*prints the result with 4 arguments for i and 3 arguments for x */
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);

    /*the function does not return any value*/
    return 0;
}
