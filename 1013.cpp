#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
/*
令 P
?i
??  表示第 i 个素数。现任给两个正整数 M≤N≤10
?4
?? ，请输出 P
?M
??  到 P
?N
??  的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 P
?M
??  到 P
?N
??  的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103

*/ 
int judge(int n){
	if(n==1||n==4||n==6)return 0;
	else if(n==2||n==3||n==5)return 1;
	else{
		int a = sqrt(n);
		for(int j=2;j<=a+1;j++)
			if(n%j==0)return 0;
		return 1; 
	}
}
int main(){
	int M,N;
	vector<int>arr;
	cin>>M>>N;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(7);
	int num=4;
	int n=11;
	while(num<N){
		if(judge(n)==1){
			arr.push_back(n);
			num++;
		}
		n++;
	}
	int count=0;
	for(int i=M-1;i<N;i++){
		cout<<arr[i];
		if(count<9&&i!=N-1){
		//注意，最后一个数要输出换行而不是空格！！ 
			cout<<" ";
			count++;
		}
		else{
			cout<<endl;
			count=0;
		}
	}
	return 0;
} 
