#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
/*
�� P
?i
??  ��ʾ�� i �����������θ����������� M��N��10
?4
?? ������� P
?M
??  �� P
?N
??  ������������

�����ʽ��
������һ���и��� M �� N������Կո�ָ���

�����ʽ��
����� P
?M
??  �� P
?N
??  ������������ÿ 10 ������ռ 1 �У�����Կո�ָ�������ĩ�����ж���ո�

����������
5 27
���������
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
		//ע�⣬���һ����Ҫ������ж����ǿո񣡣� 
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
