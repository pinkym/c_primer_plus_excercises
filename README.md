# c_primer_plus_exercises

c primer plus 第五版的编程练习解答

## 命名规则
exer + 章节号 + 题目号
例：exer9.1,即第九章编程练习的第一题

## 编译器及运行环境
### Windows系统的安装
安装 MinGW。请访问[MinGW 的主页](http://www.mingw.org/) ，进入MinGW 下载页面，下载最新版本的 MinGW 安装程序。
至少要安装 gcc-core、gcc-g++、binutils 和 MinGW runtime，但是一般情况下都会安装更多其他的项。
添加 安装的 MinGW 的 bin 子目录到您的 PATH 环境变量中，就可以在命令行中通过简单的名称来指定这些工具。
### Linux系统
安装gcc即可。

## 运行方法
进入命令行工具，依次输入以下命令即可运行：

```
进入工程目录
gcc exer9.1.c -o test
test
```
  
