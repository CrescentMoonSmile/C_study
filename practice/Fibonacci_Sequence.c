#include <stdio.h>

//void f(int n);

int main(void)
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm;

    printf("������һ�����֣�");
    scanf("%d", &n);

    /*ѭ����ʽһ*/
//    printf("쳲��������У�");
//    for(i = 0; i < n; i++) {
//
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }

    /*ѭ����ʽ��*/
    printf("쳲���������: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    /*�ݹ�*/


    return 0;
}
