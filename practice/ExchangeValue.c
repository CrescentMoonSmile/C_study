#include <stdio.h>

int main(void)
{
    double firstNum, secondNum, tempNum;

    printf("�������һ�����֣�\n");
    scanf("%lf", &firstNum);

    printf("������ڶ������֣�\n");
    scanf("%lf", &secondNum);

    tempNum = firstNum;
    firstNum = secondNum;
    secondNum = tempNum;

    printf("\n������firstNum = %.2lf\n", firstNum);
    printf("������secondNum = %.2lf\n", secondNum);

//    int a, b;
//    a = 64;
//    b = 36;
//    printf("����ǰ��\n a = %d, b = %d\n\n", a, b);
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    printf("������\n a = %d, b = %d\n", a, b);
    return 0;
}
