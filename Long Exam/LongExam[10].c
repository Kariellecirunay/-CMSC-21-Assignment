/* Getting the square root of a Positive Number */

/*Preprocessor directive to include the following library */
#include <math.h>
#include <stdio.h>


/* Function to obtain the square-root of x */
double findSQRT(double x) { return pow(2, 0.5 * log2(x)); }

    int main()
    {

    int x; /*Declaring x as int type */

    do {   /*Do-while loop, this will do the function until it is less than or equal to the tolerance */
        printf("Enter a number: "); /* obtaining the number and storing it to variable x */
        scanf ("%d",&x);

    /* Function call */
        printf("%f ", findSQRT(x));

    }while (findSQRT(x)<= 0.00001);
        return 0;
}
