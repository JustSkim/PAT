#include<stdio.h>
#include<iostream>
using namespace std;
/*
最简单的相加比较
无任何难度，用longlong类型即可

https://pintia.cn/problem-sets/994805260223102976/problems/994805312417021952
给定区间 [-2^31,2^31] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
输入格式：
输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。

输出格式：
对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。

输入样例：
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
输出样例：
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/
int main(){
    int N;
    long long int a,b,c;
    cin>>N;
    int i=1;
    while(i<=N){
        cin>>a>>b>>c;
        if(a+b>c)cout<<"Case #"<<i<<": "<<"true"<<endl;
        else  cout<<"Case #"<<i<<": "<<"false"<<endl;
        i++;
    }
    return 0;
}
/*
C语言数据类型大小：
1. signed char                    1		-2^7~2^7-1  -128~127

   short int或short              2		-2^15~2^15-1  -32768~32767

   int                                   4         -2^31~2^31-1   

   long int 或long               4          -2^31~2^31-1   所占字节数和表示范围和int类型相同！ 

   long long int 或long long  8       -2^63~2^63-1

   ```注 
   long与int：标准只规定long不小于int的长度，int不小于short的长度。
   
   double与int类型的存储机制不同，long int的8个字节全部都是数据位，而double是以尾数，底数，指数的形式表示的，类似科学计数法，因此double比int能表示的数据范围更广。
   
   long long在win32中是确实存在，长度为8个字节；定义为LONG64。
   为什么会出现long int呢？在win32现在系统中，长度为4；在历史上，或者其他某些系统中，int长度为2，是short int。
   ```

   

2. 无符号整数类型

   unsigned char                                                     1		0~2^8-1   255

   unsigned short int 或 unsigned short                 2		0~2^16-1 65355

   unsigned int                                                        4		0~2^32-1

   unsigned long int 或 unsigned long                   4		0~2^32-1

   unsigned long long int 或 unsigned long long  8		0~2^64-1

3. 浮点类型

   float					 4		-3.4e38~+3.4e38

   double 				8		-1.7e308~+1.7e308

   long double		12		-1.19e4932~+1.19e4932

 
*/
