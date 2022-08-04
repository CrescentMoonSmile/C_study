#  Linux C编程一站式学习笔记

##  一、程序基本概念

###  1、程序和编程语言

* 程序有一系列指令组成，通常包括以下几种：

  * 输入
  * 输出
  * 基本运算
  * 测试分支
  * 循环

* **编写程序可以说就是这样一个过程：把复杂的任务分解成子任务，把子任务再分解成更简单的任务，层层分解，直到最后简单得可以用以上指令来完成。**

* 平台的解释：

  * 计算机体系结构
  * 操作系统
  * 开发平台（编译器、链接器等）

* 编译（compile）过程

  ![编译执行的过程](./images_学习笔记\intro.compile.png)

  * 用文本编辑器写一个C程序，然后保存成一个文件，例如`program.c`（通常C程序的文件名后缀是`.c`），这称为源代码（Source Code）或源文件，
  * 运行编译器编译源文件，编译的过程并不执行程序，而是把源代码全部翻译成机器指令，再加上一些描述信息，生成一个新的文件，例如`a.out`，这称为可执行文件
  * 可执行文件可以被操作系统加载运行，计算机执行该文件中由编译器生成的指令

* 解释（Interpret）过程

  ![解释执行的过程](./images_学习笔记\intro.interpret.png)

* 编程语言演化

  * 机器语言称为第一代语言（1GL，1st Generation Programming Language）
  * 汇编语言称为第二代语言（2GL，2nd Generation Programming Language）
  * C、C++、Java、Python等可以称为第三代语言（3GL，3rd Generation Programming Language）
  * 4GL（4th Generation Programming Language），例如SQL语言（SQL，Structured Query Language，结构化查询语言）
    * 4GL以后的编程语言更多是描述要做什么（Declarative）而不描述具体一步一步怎么做（Imperative）
  * 5GL（5th Generation Programming Language）

###  问题

1. 解释执行的语言相比编译执行的语言有什么优缺点?

