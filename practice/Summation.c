#include <stdio.h>
int main(void)
{
    int n, i, sum = 0;

    printf("输入一个正整数: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i) {
        sum += i;   // sum = sum+i;
    }

//    i = 1;
//    while(i <= n) {
//        sum += i;
//        ++i;
//    }

    printf("Sum = %d",sum);


//    int num;
//    printf("请输入一个自然数：");
//    while (scanf("%d", &num) == 1)
//    {
//        printf("Sum = %d", (num + 1) * num / 2);
//        break;
//    }

    return 0;
}
