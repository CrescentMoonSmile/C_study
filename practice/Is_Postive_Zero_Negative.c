//#include <stdio.h>
//
//int main() {
//    int number, num;//因为下面使用了>>,所以定义为整型
//    scanf("%d", &number);
//    //应该利用了负数的存储方式
//    num = number >> 31;
//    if (num == 0) {
//        if (number == 0) {
//            printf("输入的是0");
//        } else {
//            printf("输入的是正数");
//        }
//    } else {
//        printf("你输入的是负数");
//    }
//    return 0;
//}

#include<stdio.h>

int main(){
    double  number;
    printf("请输入一个数字: ");
    scanf("%lf", &number);
    if(number < 0.0)
        printf("你输入的是负数>_<\n");
    else if(number > 0.0)
        printf("你输入的是正数-.-\n");
    else
        printf("你输入的是零0.0\n");
}
