#include <stdio.h>

int main(void)
{
    int num;

    printf("������һ��������");
    scanf("%d", &num);

//    if (num % 2 == 0)
//        printf("%d ��ż����", num);
//    else
//        printf("%d ��������", num);

    if (num & 1)
        printf("%d ��������", num);
    else
        printf("%d ��ż����", num);

    return 0;
}
