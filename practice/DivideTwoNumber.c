#include <stdio.h>

int main(void)
{
    int diviend, divisor, quotient, remainder;

    printf("���뱻������");
    scanf("%d", &diviend);

    printf("���������");
    scanf("%d", &divisor);

    quotient = diviend / divisor;
    remainder = diviend % divisor;

    printf("�� = %d\n",quotient);
    printf("���� = %d", remainder);

    return 0;
}
