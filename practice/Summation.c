#include <stdio.h>
int main(void)
{
    int n, i, sum = 0;

    printf("����һ��������: ");
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
//    printf("������һ����Ȼ����");
//    while (scanf("%d", &num) == 1)
//    {
//        printf("Sum = %d", (num + 1) * num / 2);
//        break;
//    }

    return 0;
}
