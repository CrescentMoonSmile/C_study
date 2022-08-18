#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    printf("请输入两个数（以空格分割）：");
    scanf("%d %d",&firstNumber, &secondNumber);
    sumOfTwoNumbers = firstNumber + secondNumber;
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
    return 0;
}
