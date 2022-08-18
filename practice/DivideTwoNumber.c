#include <stdio.h>

int main(void)
{
    int diviend, divisor, quotient, remainder;

    printf("输入被除数：");
    scanf("%d", &diviend);

    printf("输入除数：");
    scanf("%d", &divisor);

    quotient = diviend / divisor;
    remainder = diviend % divisor;

    printf("商 = %d\n",quotient);
    printf("余数 = %d", remainder);

    return 0;
}
