#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int age;
    bool teenager;

    printf("Enter an age number: ");
    scanf ("%d",&age);

    if (age >= 13 && age <= 19){
        teenager = true;
        printf ("%d", teenager);
    }

    else {
        teenager = false;
        printf ("%d", teenager);
    }

    return 0;
}
