#include <stdio.h>

int main(void)
{
    int i;

//    printf("�����ǣ�\n");
//    for (i = 1; i <= 10; i++) {
//        if (i % 2 != 0) {
//            printf("%2d\n", i);
//        }
//    }
//
//    printf("ż���ǣ�\n");
//    for (i = 1; i <= 10; i++) {
//        if (i % 2 == 0) {
//            printf("%2d\n", i);
//        }
//    }

    for (i = 1; i <= 10; i++)
        i & 1 ? printf("����: %d\n", i) : printf("ż��: %d\n", i);
//        printf(i&1 ? "����: %d\n":"ż��: %d\n", i);

    return 0;
}
