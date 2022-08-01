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
数据类型大小是 4 字节，能表示的数值范围是
-2^(32-1) – 2^(32-1)-1 （即 -2147483648 ~ 2147483647）
打印类型是 %d ，使用格式为 int 名 = 值;

（2）short类型
数据类型大小是 2 字节，能表示的数值范围是
-2^(16-1) – 2(16-1) -1 （即 -32768 ~ 32767）
打印类型是 %hd ，使用格式为 short 名 = 值;

（3）long类型（即long int）
数据类型大小是 4 字节，能表示的数值范围是
-2^(32-1) – 2^(32-1)-1 （即 -2147483648 ~ 2147483647）
打印类型是 %ld ，使用格式为 long名 = 值;

（4）long long类型
数据类型大小是 8 字节，能表示的数值范围是
-2^(63) ~ 2^(63)-1 (这个数足够大了)
打印类型是 %lld ，使用格式为 long long 名 = 值;

###  2.无符号整型

无符号数用 unsigned 表示 ，只表示数据量，而没有方向（没有正负，且无符号数最高位不是符号位，而就是数的一部分，无符号数不可能是负数。

（1）unsigned int 类型
数据类型大小是 4 字节，能表示的数值范围是
0 – 2^(32）-1 （即 0~4294967295）
打印类型是 %u ，使用格式为 unsigned int 名 = 值;

（2）unsigned short 类型
数据类型大小是 2 字节，能表示的数值范围是
0 ~ 2^8 -1 （即 0~65535）
打印类型是 %hu ，使用格式为 unsigned short 名 = 值;

（3）unsigned long 类型
数据类型大小是 4 字节，能表示的数值范围是
0 – 2^(32）-1 （即 0~4294967295）
打印类型是 %lu ，使用格式为 unsigned long 名 = 值;

（4）unsigned long long 类型
数据类型大小是 8 字节，能表示的数值范围是
0~2^63-1
打印类型是 %llu ，使用格式为 unsigned long long 名 = 值;



###  3. 其他知识点

* 各类型所占字节大小（受编译器影响）

  ~~~C
  #include <stdio.h>
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

##  字符型

##  实型

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
