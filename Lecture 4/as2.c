#include <stdio.h>
int main(void)
{
    int i;
    i = 1;

    while (i < 10) {
        printf("%d ", i);
        i ++;
    }

     for (; i < 10;) {
        printf("%d ", i);
        i ++;
    }

    do {
        printf("%d ", i);
        i ++;
    } while (i < 10);

    return 0;
}
