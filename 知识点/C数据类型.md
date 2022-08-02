#  C数据类型

参考文献：

[C语言 中的 数据类型 超详解](https://blog.csdn.net/weixin_44982036/article/details/108773054)

[C 数据类型 | 菜鸟教程 (runoob.com)](https://www.runoob.com/cprogramming/c-data-types.html)

[C语言深度解析（3） - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/417571028)

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
  
结果如下
  
  ~~~C
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

  unsigned int a=10u;

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
* 定义：float v1 = 4.345; 
* 格式匹配符是：%f ， 默认保留 6 位小数。

（2）双精度浮点型（double）

* 双精度浮点型的大小为 8 字节
* 定义：double v2 = 5.678;
* 格式匹配符是：%f ， 默认保留 6 位小数
* printf(“n = %08.3f\n”, n);
  输出的含义为：显示8位数（包含小数点）， 不足8位用0填充。并且保留3位小数。对第4位做四舍五入。

###  易错知识点

* float、double都是有符号的，不能用signed和unsigned修饰

##  void类型



##  指针类型

##  数组类型

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
