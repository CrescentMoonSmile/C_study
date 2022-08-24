#include <stdio.h>

void f(int n);
void func(int i, int j);

int main(void)
{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= 9; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%dx%d = %d\t", j, i, i*j);
//        }
//        printf("\n");
//    }

    f(9);
    return 0;
}

void f(int n)
{
    int i = n;
    if (n > 1) {
        f(n-1);
        func(n, i);
//        for (i = 1; i <= n; i++) {
//            printf("%dx%d = %d\t", i, n, i*n);
//        }
        printf("\n");
    } else {
        printf("%dx%d=%d\n", n, n, n*n);
    }

}

void func(int i, int j)
{
    if(j > 1)
        func(i , j-1);
    printf("%dx%d=%d\t", j, i, i*j);
}

//#include <stdio.h>
//
//void func(int i, int j)
//{
//    if(i>j)
//        return;
//    printf("%dx%d=%d\t", i, j, i*j);
//    func(i+1, j);
//}
//
//void f(int n)
//{
//    if(n==1)
//        printf("1x1=1\n");
//    else
//    {
//        f(n-1);
//        func(1, n);
//        putchar('\n');
//    }
//}
//
//
//int main()
//{
//    f(9);
//    return 0;
//}
