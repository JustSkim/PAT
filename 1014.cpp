#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
一道不难但判断贼ex的题
侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：
输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。

输出格式：
在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
输出样例：
THU 14:04

请务必用nowcoder的oj判断 
https://www.nowcoder.com/pat/6/problems
*/
int main(){
	string s1,s2,s3,s4;
	string day,min;
	int hour=0;
	int index=1;
	int i=0,min_index=0;
	
	//string也可以数组！ 
	string dayList[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	
	int hourList[15]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,00};
	getline(cin,s1);//读取包含空格（当然此题不需要）但不包含回车的字符串 
	getline(cin,s2);
	getline(cin,s3);
	getline(cin,s4);	
	while(i<s1.length()&&i<s2.length()){
		if(index>=3) break;
		if(s1[i]==s2[i]){
			if(index==1&&s1[i]>='A'&&s1[i]<='N'){
				index++;
				day = dayList[s1[i]-'A'];
			}
			else if(index==2){
				if(s1[i]>='A'&&s1[i]<='N'){
					hour = hourList[s1[i]-'A'];
					index++;
				}
				else if(s1[i]>='0'&&s1[i]<='9'){
					hour=s1[i]-'0';
					index++;
				}
				else{}
			}
		}
		i++;
	}
	int j=0;
	while(j<s3.length()&&j<s4.length()){
		if(s3[j]==s4[j]&&s3[j]>='a'&&s3[j]<='z'){
			min_index=j;
			break;
		}
		j++;
	}
	cout<<day<<" ";
	if(hour>=10){
		cout<<hour;
	}
	else cout<<"0"<<hour;
	cout<<":";
	if(min_index<10)
		cout<<"0"<<min_index;
	else cout<<min_index;
	return 0;
} 
