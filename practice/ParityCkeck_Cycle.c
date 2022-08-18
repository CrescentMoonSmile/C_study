#include <stdio.h>

int main(void)
{
    int i;

//    printf("奇数是：\n");
//    for (i = 1; i <= 10; i++) {
//        if (i % 2 != 0) {
//            printf("%2d\n", i);
//        }
//    }
//
//    printf("偶数是：\n");
//    for (i = 1; i <= 10; i++) {
//        if (i % 2 == 0) {
//            printf("%2d\n", i);
//        }
//    }

    for (i = 1; i <= 10; i++)
        i & 1 ? printf("奇数: %d\n", i) : printf("偶数: %d\n", i);
//        printf(i&1 ? "奇数: %d\n":"偶数: %d\n", i);

    return 0;
}
