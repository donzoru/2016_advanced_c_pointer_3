# 2016_advanced_c_pointer_3
（1、2班）指针作业3

1.	
【问题描述】输入数组元素个数和数组元素值，用函数完成求该数组中下标为偶数的元素之和。
【输入形式】输入数组元素个数，和数组元素值，数组元素类型为整数
【样例输入】8 0 1 2 3 4 5 6 7
【样例输出】12

2.	
【问题描述】输入数组个数及数组元素值，编写一个函数完成求该数组的最大值和最小值，该函数的返回值为void。
【输入形式】输入数组个数及数组元素值
【输出形式】输出最大值和最小值
【样例输入】5 0 1 2 3 4
【样例输出】4 0

3.	
【问题描述】有一字符串，包含n个字符。写程序完成，将此字符串从第m个字符开始到第n个字符之间的全部字符复制成为另一个字符串并输出。
【输入形式】输入一串字符，输入复制的开始字符位置m，复制结束的字符位置n
【输出形式】输出复制后的字符串
【样例输入】abcdefghk 5 12
【样例输出】efghk
【样例输入】abcdefghk 5 2
【样例输出】error

4.	
【问题描述】编程完成加密程序:由键盘输入明文，通过加密程序转换成密文并输出到屏幕上。 算法：明文中的字母转换成其后的第4个字母,例如，A变成E(a变成e)，Z变成D,非字母字符不变；同时将密文每两个字符之间插入一个空格。例如，China转换成密文为G l m r e。要求：在函数change中完成字母转换，在函数insert中完成增加空格，用指针传递参数。
【输入形式】输出字符串
【输出形式】输出加密后的字符串
【样例输入】China
【样例输出】G l m r e

5.	
【问题描述】一个IP地址是4个字节（每个字节8个位）的二进制码组成。请将32位二进制码表示的IP地址转换为4段十进制格式表示的IP地址格式输出。
【输入形式】<32位二进制串表示的IP地址>
【输出形式】<4段十进制格式表示的IP地址>
【样例输入】11001100100101000001010101110010
【样例输出】204.148.21.114

6.	
【问题描述】有5个学生，每个学生的数据包括学号、3门课程的成绩，从键盘输入5个学生数据，要求输出3门课程总平均分，其中求平均分要用函数完成。
【输入形式】输入5个学生的信息，分别包括学号、3门课成绩（数据之间以空格区分，学号用整数类型表示，成绩用double类型保存）
【输出形式】3门课总平均分（注：保留2位小数）
【样例输入】
1 87 69 77
2 58 68 68
3 89 73 95
4 66 53 90
5 70 82 83
【样例输出】
75.20

7.	
【问题描述】将一个 5X5 的矩阵中最大的元素放在中心，4 个角分别放 4 个最小的元素（顺序为从左到右，从上到下依次从小到大存放），写一函数实现之，使用二维数组指针进行处理。
【输入形式】输入一个 5X5 的矩阵。
【输出形式】输出规格化的矩阵。
【样例输入】
41 77 51 54 71
65 0 37 63 57
73 21 23 37 99
85 93 93 24 96
80 40 70 33 56
【样例输出】
0 77 51 54 21
65 41 37 63 57
73 71 99 37 80
85 93 93 56 96
23 40 70 33 24
