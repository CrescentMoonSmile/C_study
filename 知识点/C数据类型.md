#  C数据类型

* 建立时间：2022年08月02号

* 文档作者：Mu(CrescentMoonSmile)

* 参考文档说明

  > 如果全文或大部分内容都有参考某一文献，则将文献链接放在本文档最开头处的“参考文献”中
  >
  > 如果近文档中的某一个小知识点有参考某一文献，则将文献链接放在该知识点旁

##  参考文献

[C语言 中的 数据类型 超详解](https://blog.csdn.net/weixin_44982036/article/details/108773054)

[C 数据类型 | 菜鸟教程 (runoob.com)](https://www.runoob.com/cprogramming/c-data-types.html)

[Linux C编程一站式学习 (akaedu.github.io)](http://akaedu.github.io/book/index.html)

##  类型分类

数据类型：

* 基本类型
  * 整型
    * 短整型 short
    * 整型 int
    * 长整型 long
    * 长长整形 long long
  * 字符型 char
  * 实型（浮点型）
    * 单精度实型 float
    * 双精度实型 double
* 派生类型
  * 数组类型
  * 结构（体）类型 struct
  * 联合（共用体）类型 union
  * 指针类型（char *、int *、int **等）
  * 函数类型
  * 原子类型（C11起）
* 枚举类型 enum

##  整型

###  1.有符号整型

有符号整型的数据类型通常包括 int、short、long、long long 四种，因为是有符号类型，所以前面要加上 signed ，但是通常省略，也就是说在代码中直接打出 int 类型就代表是有符号类型的。

（1）int类型

* 数据类型大小是 4 字节

* 表示的数值范围是

  -2^(32-1) – 2^(32-1)-1 （即 -2147483648 ~ 2147483647）

* 打印类型是 %d ，使用格式为 int 名 = 值;

（2）short类型

* 数据类型大小是 2 字节，
* 表示的数值范围是
  -2^(16-1) – 2(16-1) -1 （即 -32768 ~ 32767）
* 打印类型是 %hd ，使用格式为 short 名 = 值;

（3）long类型（即long int）

* 数据类型大小是 4 字节
* 表示的数值范围是
  -2^(32-1) – 2^(32-1)-1 （即 -2147483648 ~ 2147483647）
* 打印类型是 %ld ，使用格式为 long名 = 值;

（4）long long类型

* 数据类型大小是 8 字节
* 表示的数值范围是
  -2^(64-1) ~ 2^(64-1)-1 (这个数足够大了)
* 打印类型是 %lld ，使用格式为 long long 名 = 值;

###  2.无符号整型

无符号数用 unsigned 表示 ，只表示数据量，而没有方向（没有正负，且无符号数最高位不是符号位，而就是数的一部分，无符号数不可能是负数。

（1）unsigned int 类型

* 数据类型大小是 4 字节
* 表示的数值范围是
  0 – 2^(32）-1 （即 0~4294967295）
* 打印类型是 %u ，使用格式为 unsigned int 名 = 值;

（2）unsigned short 类型

* 数据类型大小是 2 字节
* 表示的数值范围是
  0 ~ 2^8 -1 （即 0~65535）
* 打印类型是 %hu ，使用格式为 unsigned short 名 = 值;

（3）unsigned long 类型

* 数据类型大小是 4 字节
* 表示的数值范围是
  0 – 2^(32）-1 （即 0~4294967295）
* 打印类型是 %lu ，使用格式为 unsigned long 名 = 值;

（4）unsigned long long 类型

* 数据类型大小是 8 字节
* 表示的数值范围是
  0~2^64-1
* 打印类型是 %llu ，使用格式为 unsigned long long 名 = 值;



###  3. 其他知识点

* 各类型所占字节大小（受编译器影响）

  ~~~C
  #include <stdio.h>
  #include <stdlib.h>
  #include <float.h>
  #include <limits.h>
   
  int main()
  {
     printf("char 存储大小			 : %lu \n", sizeof(char));
     printf("unsigned char 存储大小	 : %lu \n", sizeof(unsigned char));
     printf("signed char 存储大小		 : %lu \n", sizeof(signed char));
     printf("short 存储大小 			 : %lu \n", sizeof(short));
     printf("unsigned short 存储大小 	 : %lu \n", sizeof(unsigned short));
     printf("signed short 存储大小	 : %lu \n", sizeof(signed short));
     printf("int 存储大小 			 : %lu \n", sizeof(int));
     printf("unsigned int 存储大小 	 : %lu \n", sizeof(unsigned int));
     printf("signed int 存储大小 		 : %lu \n", sizeof(signed int));
     printf("long 存储大小 			 : %lu \n", sizeof(long));
     printf("unsigned long 存储大小 	 : %lu \n", sizeof(unsigned long));
     printf("signed long 存储大小 	 : %lu \n", sizeof(signed long));
     printf("float 存储大小			 : %lu \n", sizeof(float));
     printf("double 存储大小			 : %lu \n", sizeof(double));
     printf("long int 存储大小 	 	 : %lu \n", sizeof(long int));
     printf("long long 存储大小 	 	 : %lu \n", sizeof(long long));
     printf("long double 存储大小 	 : %lu \n", sizeof(long double));
     system("pause"); 
     return 0;
  }
  ~~~
~~~
  
结果如下
  char 存储大小            : 1
  unsigned char 存储大小   : 1
  signed char 存储大小     : 1
  short 存储大小           : 2
  unsigned short 存储大小  : 2
  signed short 存储大小    : 2
  int 存储大小             : 4
  unsigned int 存储大小    : 4
  signed int 存储大小      : 4
  long 存储大小            : 4
  unsigned long 存储大小   : 4
  signed long 存储大小     : 4
  float 存储大小           : 4
  double 存储大小          : 8
  long int 存储大小        : 4
  long long 存储大小       : 8
  long double 存储大小     : 16
~~~

* `根据C99，long>=4个字节，int>=2字节

  |       类型说明符       |           等价类型           | 数据模型中的位宽 |        |        |        |        |
  | :--------------------: | :--------------------------: | :--------------: | :----: | :----: | ------ | ------ |
  |                        |                              |      C 标准      |  LP32  | ILP32  | LLP64  | LP64   |
  |         short          |          short int           |   至少 **16**    | **16** | **16** | **16** | **16** |
  |       short int        |                              |                  |        |        |        |        |
  |      signed short      |                              |                  |        |        |        |        |
  |    signed short int    |                              |                  |        |        |        |        |
  |     unsigned short     |      unsigned short int      |                  |        |        |        |        |
  |   unsigned short int   |                              |                  |        |        |        |        |
  |                        |                              |                  |        |        |        |        |
  |          int           |             int              |   至少 **16**    | **16** | **32** | **32** | **32** |
  |         signed         |                              |                  |        |        |        |        |
  |       signed int       |                              |                  |        |        |        |        |
  |        unsigned        |         unsigned int         |                  |        |        |        |        |
  |      unsigned int      |                              |                  |        |        |        |        |
  |                        |                              |                  |        |        |        |        |
  |          long          |           long int           |   至少 **32**    | **32** | **32** | **32** | **64** |
  |        long int        |                              |                  |        |        |        |        |
  |      signed long       |                              |                  |        |        |        |        |
  |    signed long int     |                              |                  |        |        |        |        |
  |     unsigned long      |      unsigned long int       |                  |        |        |        |        |
  |   unsigned long int    |                              |                  |        |        |        |        |
  |                        |                              |                  |        |        |        |        |
  |       long long        |     long long int (C99)      |   至少 **64**    | **64** | **64** | **64** | **64** |
  |     long long int      |                              |                  |        |        |        |        |
  |    signed long long    |                              |                  |        |        |        |        |
  |  signed long long int  |                              |                  |        |        |        |        |
  |   unsigned long long   | unsigned long long int (C99) |                  |        |        |        |        |
  | unsigned long long int |                              |                  |        |        |        |        |

###  4.编码习惯

* 所有的无符号数定义时都应该在数的后面加U的后缀

  unsigned int a=10u;[C语言深度解析（3） - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/417571028)

* unsigned int a =-100u;合法但有问题

  比如

  ~~~C 
  #include <stdio.h>
  int main()
  {
      unsigned int a = -1u;
      unsigned int b = 1;
      int c = -1;
      
      printf("a: %d\n",a);
      printf("a: %u\n",a);
      printf("b: %d\n",b);
      printf("b: %u\n",b);
      printf("c: %d\n",c);
      printf("c: %u\n",c);
      
      return 0;
  }
  ~~~

  ~~~C
  输出结果为：
  a: -1
  a: 4294967295
  b: 1
  b: 1
  c: -1
  c: 4294967295
  
  Process returned 0 (0x0)   execution time : 0.116 s
  Press any key to continue.
  ~~~

* 介绍一条新的注释方法：if（0）{ }，有点偏，不建议使用，但必须了解，看别人的代码时要看懂。

* 

##  字符型（char）

* 作用：字符型变量用于存储一个单一字符

* 所占空间：1个字节（1 byte=8 bits）

* 变量赋值方式：char a = 'A'; char b = '\n'；等

  * 所赋的值需要用一对英文半角格式的单引号（''）把字符括起来
  * 该过程不是把字符本身放入变量的内存单元，而是将该字符对应的ASCII编码存储到变量的存储单元内

* 打印格式：%c

* 数值范围：

  * 有符号：$-2^{8-1}到2^{8-1}-1$，即（-128~127）
  * 无符号：$0到2^8-1$，即（0~255）

* 常用的ASCII码为

  * 'A'：65
  * 'a'：97，大小写相差32
  * '0'：48

  * '\n'：10
  * '\0'：0，字符串的结束符，任何字符串之后都会自动加上'\0'
  
* 注：

  * 如果以

    ~~~C
    char test = 'abc'
    ~~~

    的方式定义一个字符型变量，警告：**常量转换溢出**。最后，test打印结果为

    ~~~C
    c
    Process returned 0 (0x0)   execution time : 0.016 s
    Press any key to continue.
    ~~~

  * char a[]="abc";执行后，数组的长度是4。最后一个字符是'\0'


##  实型

###  基础知识

（1）单精度浮点型（float）

* 单精度浮点型的大小是 4 字节
* 精度：6位有效位
* 定义：float v1 = 4.345; 
* 格式匹配符是：%f ， 默认保留 6 位小数。

（2）双精度浮点型（double）

* 双精度浮点型的大小为 8 字节

* 精度：15位有效位

* 定义：double v2 = 5.678;

* 格式匹配符是：%f ， 默认保留 6 位小数

* printf(“n = %08.3f\n”, n);
  输出的含义为：显示8位数（包含小数点）， 不足8位用0填充。并且保留3位小数。对第4位做四舍五入。
  
* | 类型        | 存储大小 | 值范围                 | 精度        |
  | :---------- | :------- | :--------------------- | :---------- |
  | float       | 4 字节   | 1.2E-38 到 3.4E+38     | 6 位有效位  |
  | double      | 8 字节   | 2.3E-308 到 1.7E+308   | 15 位有效位 |
  | long double | 16 字节  | 3.4E-4932 到 1.1E+4932 | 19 位有效位 |

###  易错知识点

* float、double都是有符号的，不能用signed和unsigned修饰





##  数据类型转换

[C语言中的数据类型转换_哲思天下的博客-CSDN博客_c语言怎么转化数据类型](https://blog.csdn.net/yangjingdong2008/article/details/121165307)

[3. 类型转换 (akaedu.github.io)](http://akaedu.github.io/book/ch15s03.html)

* 类型转换按：char,short,int ,unsigned int, long, unsigned long, float，double，long double

  ![img](./images_C数据类型\数据转换等级_1.png)

  ![img](./images_C数据类型\数据转换等级_2.png)

* 若参与运算量的类型不同，则先转换成同一类型，然后进行运算

2. 转换按数据长度增加的方向进行，以保证精度不降低。如int型和long型运算时，先把int量转成long型后再进行运算

            a、若两种类型的字节数不同，转换成字节数高的类型
            
            b、若两种类型的字节数相同，且一种有符号，一种无符号，则转换成无符号类型

~~~C
#include <stdio.h>

int main()
{
    long i = -1;
    unsigned long j = 1;
    if(i > j)
        printf("-1L > 1UL\n");
    else
        printf("1UL > -1L\n");
    return 0;
}
~~~


 上述代码的输出结果是 ：

>  -1L > 1UL

之所以出现上述结果是由于在比较时候，带符号类型long自动转换成了unsigned类型

可见不同数据类型作比较或运算也许得不到预期的结果，程序中应避免这种情况。

另外看下面程序

~~~C
#include <stdio.h>

int main()
{
    int i = -2;
    unsigned int j = 10;
    printf("%d\n", i*j);
    printf("%d\n", i*j/10);
    return 0;
}
 用gcc编译的运行结果为：
~~~


>  -20
> 429496727

>  当用%d打印i*j的运算结果时，首先会把i转换成unsigned int类型，由于负数是以补码的形式表示，所以-2的补码是0xFFFFFFFE，i*j之后的值为0x9FFFFFFEC，在%d打印时会把其进行舍位操作，舍位之后为0xFFFFFFEC，最高位代表符号位，所以这个值为-20.

> i*j/10计算过程是：先计算i*j，然后舍位后为0xFFFFFFEC，然后以unsigned int形式除以10， 由于是整数除法，会舍弃小数部分，所以实际计算过程为4294967276/10 = 429496727.

3. 所有的浮点运算都是以双精度进行的，即使是两个float单精度量运算的表达式，也要先转换成double型，再作运算.（书中说两个float型运算时并不会转换成double型）
4. char型和short型参与运算时，都先转换成int型
5. 在赋值运算中，赋值号两边量的数据类型不同时，赋值号右边量的类型将转换为左边量的类型。

**编码时要注意：**

1.  **避免不同类型的数据参与运算（比较），如确实需要参与运算，一定要转换成同一类型进行。**

例如上述代码，写成  printf("%d\n", i*(int)j/10); 时才能得到正确的结果。

2. 强制类型转换不会改变原变量的数据属性

##  void类型

void 类型指定没有可用的值。它通常用于以下三种情况下：

| 序号 | 类型与描述                                                   |
| :--- | :----------------------------------------------------------- |
| 1    | **函数返回为空** C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空。例如 **void exit (int status);** |
| 2    | **函数参数为空** C 中有各种函数不接受任何参数。不带参数的函数可以接受一个 void。例如 **int rand(void);** |
| 3    | **指针指向 void** 类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 **void \*malloc( size_t size );** 返回指向 void 的指针，可以转换为任何数据类型。 |

* void在32位编译器中占1个字节，***64位还未测试***

##  指针类型

* 作用：指针即内存地址，指针变量用于存放内存地址的变量

* 声明

  ~~~C
  type * var_name;
  ~~~
  
* 占据空间大小：4个字节（32位机）/8个字节（64位机）

  ~~~C
  #include <stdio.h>
  int main()
  {
      printf("char *占%d字节\n",sizeof(char *));
      printf("int *占%d字节\n",sizeof(int *));
      printf("long *占%d字节\n",sizeof(long *));
      printf("float *占%d字节\n",sizeof(float *));
      printf("double *占%d字节\n",sizeof(double *));
      printf("long double *占%d字节\n",sizeof(long double *));
      return 0;
  }
  ~~~

  效果如下

  ~~~C
  //32位编译器
  char *占4字节
  int *占4字节
  long *占4字节
  float *占4字节
  double *占4字节
  long double *占4字节
  
  Process returned 0 (0x0)   execution time : 0.016 s
  Press any key to continue.
    
  //64位编译器
  ~~~

* 打印类型是 %p ，使用格式为 type * 名 = 值;

##  数组类型

* 定义方式： 

  ~~~C
  type arrayName[arrraySize]
  ~~~

  注：数组名与[arrraySize]之间有无空格，有多少空格，都不影响

* 占据大小由数据类型和个数决定

* 需注意

  * > 1、字符数组的初始化
    >
    > char a[9]={'1','2','3','4','5','6','7','8','9'};//长度为9，最后一个元素为'9'
    >
    > //初值个数小于数组长度，则只将这些字符赋给数组中前面那些元素，其余的元素自动定为空字符（即'\0'）
    >
    > char a[9]={'1','2','3','4','5','6','7','8'};//长度为9，最后一个元素为'\0'
    >
    > 2、字符串常量初始化数组。
    >
    > char c[ ]={‘c’，‘ ’，‘p’，‘r’，‘o'，'g'，'r'，'a'，'m'}；可写为：char c[ ]={"C program"} 或去掉{}写为：char c[ ]="C program";注意：此时数组c的长度不是9，而是10。因为字符串常量的最后由系统加上一个'\0'

##  结构类型

##  共用体类型

##  枚举类型





##  杂类知识点

* 查看C编译器位数（第二种更方便点）

  * 方法一：

  ~~~C
  //作者：IceBear
  //链接：https://www.zhihu.com/question/366578332/answer/976185213
  //来源：知乎
  //著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
  #include <stdint.h>
  
  #if SIZE_MAX == 18446744073709551615ull
  #define A 64
  #elif SIZE_MAX == 4294967295
  #define A 32
  #else
  #error "unknown"
  #endif
  
  #include <stdio.h>
  
  int main()
  {
      printf("%u\n", A);
      return 0;
  }
  ~~~

  * 方法二：[Code::Blocks32位改为编译64位程序方法 - 哔哩哔哩 (bilibili.com)](https://www.bilibili.com/read/cv10371590)

    你可以用专业软件直接看，但是最简单的办法是把你的.exe程序改成.txt后缀，然后用记事本看，不用担心乱码，你只需要注意第二行那里PE后是d还是L即可。若是d，则证明该程序是64位；若是L，则证明是32位。这种方法适用于很多文件如dll文件也是可行的。 作者：我不是k_ https://www.bilibili.com/read/cv10371590 出处：bilibili

* 
