#include <stdio.h>
int main(void)
{
    int i;
    i = 1;
    while (i <= 1024) {
        printf("%d ", i);
        i *= 2;
    }
    return 0;
}
