#include <stdio.h>

int main(void)
{
    double firstNum, secondNum, tempNum;

    printf("请输入第一个数字：\n");
    scanf("%lf", &firstNum);

    printf("请输入第二个数字：\n");
    scanf("%lf", &secondNum);

    tempNum = firstNum;
    firstNum = secondNum;
    secondNum = tempNum;

    printf("\n交换后，firstNum = %.2lf\n", firstNum);
    printf("交换后，secondNum = %.2lf\n", secondNum);

//    int a, b;
//    a = 64;
//    b = 36;
//    printf("交换前：\n a = %d, b = %d\n\n", a, b);
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    printf("交换后：\n a = %d, b = %d\n", a, b);
    return 0;
}
