#include <stdio.h>
#include <math.h>

//structures
struct line {
    struct point {
        float x;
        float y;
    } point1,point2;
    float *midpoint;
    float slope;
    float distance;
};

//function prototype
float solveSlope (struct line line1);
float *solveMidpoint (struct line line1);
float solveDistance (struct line line1);
float solveInterceptForm(struct line line1);

//main functions, enters the input and calls the function
int main (){

    struct line line1;
    printf("Enter x and y for point 1[with comma]:");
    scanf("%f,%f",&line1.point1.x,&line1.point1.y);

    printf("Enter x and y for point 2[with comma]:");
    scanf("%f,%f",&line1.point2.x,&line1.point2.y);

    solveSlope(line1);
    solveMidpoint(line1);
    solveDistance(line1);
    solveInterceptForm(line1);
    return 0;
}

//solveSlope function, formula to get the slope
float solveSlope (struct line line1)
{
    float xdifference = line1.point2.x - line1.point1.x;
    float ydifference = line1.point2.y - line1.point1.y;
    float slope = ydifference/xdifference;

    printf("Slope:%f",slope);
}

//solveMidpoint function, formula to get the midpoint
float *solveMidpoint (struct line line1)
{
    float mid1 = (line1.point1.x + line1.point2.x)/2;
    float mid2 = (line1.point1.y + line1.point2.y)/2;

    printf ("\nMidpoint:%f %f", mid1,mid2);
}

//solveDistance function, formula to get the distance
float solveDistance (struct line line1)
{
    float sqrt1 = sqrt (line1.point1.x - line1.point2.x) * (line1.point1.x - line1.point2.x);
    float sqrt2 = sqrt (line1.point1.y - line1.point2.y) * (line1.point1.y - line1.point2.y);
    float distance = sqrt1 + sqrt2;

    printf("\nDistance between 2 points:%f",distance);
}

//solveInterceptForm, formula to get the point-slope form
float solveInterceptForm(struct line line1)
{
    float xdifference = line1.point2.x - line1.point1.x;
    float ydifference = line1.point2.y - line1.point1.y;
    float m = ydifference/xdifference;
    float b = line1.point1.y - (m*line1.point1.x);

    printf ("\ny:%fx + (%f)",m,b);
}
