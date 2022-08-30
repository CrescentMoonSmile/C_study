#include <stdio.h>

//void f(int n);

int main(void)
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm;

    printf("请输入一个数字：");
    scanf("%d", &n);

    /*循环方式一*/
//    printf("斐波那契数列：");
//    for(i = 0; i < n; i++) {
//
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }

    /*循环方式二*/
    printf("斐波那契数列: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    /*递归*/


    return 0;
}
