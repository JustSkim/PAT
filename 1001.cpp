#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	int count;
	while(cin>>n){
		//�μ�ÿ�������һ���ȳ�ʼ���� 
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
