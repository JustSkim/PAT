#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
const int MAXN=1000;//报段错误时，要把量调大一点 
string fname[MAXN];
string lname[MAXN];
int grade[MAXN];
/*
读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：
每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/
int main(){
    int N;
    while(cin>>N){
        int i=0;
        cin>>fname[i]>>lname[i]>>grade[i];
        //不要过于死板，学号也可以用字符串形式，和后面一个人名一块存在一起，这对于输出是没有影响的！ 
        
        int max,min,max_index,min_index;
        max=grade[i],min=grade[i],max_index=0,min_index=0;
        i++;
        while(i!=N){
            cin>>fname[i]>>lname[i]>>grade[i];
            if(grade[i]>max){
                max=grade[i];
                max_index=i;
            }
            else if(grade[i]<min){
                min=grade[i];
                min_index=i;
            }
            i++;
        }
        cout<<fname[max_index]<<" "<<lname[max_index]<<endl;
		cout<<fname[min_index]<<" "<<lname[min_index]<<endl;			
    }
    return 0;
}
