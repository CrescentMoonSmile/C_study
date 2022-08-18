#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

//    if (num % 2 == 0)
//        printf("%d 是偶数。", num);
//    else
//        printf("%d 是奇数。", num);

    if (num & 1)
        printf("%d 是奇数。", num);
    else
        printf("%d 是偶数。", num);

    return 0;
}
