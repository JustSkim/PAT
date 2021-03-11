#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<vector>
using namespace std;
/*
1008
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置，即将A中的数据由（A
最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。

注意！！！没有说M一定小于等于N 

输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例:
6 2
1 2 3 4 5 6
输出样例:
5 6 1 2 3 4
*/ 
int main(){
	int N,M,temp,i;
	vector<int>arr;
	while(cin>>N>>M){
		arr.clear();
		int j=0;
		while(j<N){
			scanf("%d",&temp);
			arr.push_back(temp);
			j++;
		}
		if(N-M==0){
			i=0;
			while(i<N){
				cout<<arr[i]<<" ";
				i++;
			}
		}
		else{
			i=N-(M%N);	
			//注意M的值可能比N要大，所以要取余 
			while(i<N){
				cout<<arr[i]<<" ";
				i++;
			}
			i=0;
			while(i<N-(M%N)-1){
				cout<<arr[i]<<" ";
				i++;
			}
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
