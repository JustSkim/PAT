#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	int count;
	while(cin>>n){
		//牢记每次输入第一步先初始化！ 
		count=0;
		
		while(n!=1){
			if(n%2==0)n=n/2;
			else n=(3*n+1)/2;
			count++;
		}
		cout<<count<<endl; 
	}
	return 0;
}
