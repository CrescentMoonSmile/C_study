#include <stdio.h>

int main(void)
{
    int year;
    printf("������ݣ�");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0)
        || (year % 400 == 0))
        printf("y\n");
    else
        printf("n\n");

    return 0;
}
