#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
/*
1006
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。

输入格式：
每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。

输出格式：
每个测试用例的输出占一行，用规定的格式输出 n。

输入样例 1：
234
输出样例 1：
BBSSS1234
输入样例 2：
23
输出样例 2：
SS123
*/
int main(){
	int n,bai,shi,ge;
	string str;
	while(cin>>n){
		str.clear();//每次使用要清空 
		bai=n/100;
		shi=(n%100)/10;
		ge=n%10;
		for(int i=0;i<bai;i++){
			str.push_back('B');
		}
		for(int i=0;i<shi;i++){
			str.push_back('S');
		}
		if(ge>=1){
			for(int i=1;i<=ge;i++){
				str.push_back('0'+i);//将数字转为字符串 
			}
		}
		cout<<str<<endl;
	}
	return 0;
}
