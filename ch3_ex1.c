/*Header file to include the output and input functions in the program*/
#include <stdio.h>
int main() /* indicates the return of an integer value.*/
{
    int i,j;   /*declaring variables, where i and j are variables and types are int */
    float x,y; /*declaring variables, where x and y are variables and types are int */

    i=10;      /*assigning variables to i,j,x,and y */
    j=20;
    x=43.2892f;
    y=5527.0f;

    /*prints the variables with 4 arguments */
    printf("i= %d, j=%d, x= %f, y= %f \n",i,j,x,y);

    return 0; /*returned value indicates program's success or failure */
}
