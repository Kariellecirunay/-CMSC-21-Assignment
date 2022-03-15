#include <stdio.h>

int main ()
{
    int n, rev = 0, rem ;

    printf("Enter a 3-digit number: \n");
    scanf("%d",&n);

    while (n != 0)
    {
     rem = n % 10;
     rev = rev * 10 + rem;
     n= n/10;

    }

     printf("Reverse = %d", rev);

     return 0;

}
