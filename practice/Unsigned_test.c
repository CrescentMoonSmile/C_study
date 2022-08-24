#include <stdio.h>

int main(void)
{
    unsigned int a = 0;
    unsigned int b;
    int i;

    for (i = 0; i < 32; i++) {
        b = (a - 1) % 32;
        a = (a + 1) % 32;
        printf("a = %d, b = %d\n", a, b);
    }
    return 0;
}
