#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
/*
1007 �����Բ��� (20 ��)
�����Ƕ���d
?n
?? Ϊ��d
?n
?? =p
?n+1
?? ?p
?n
?? ������p
?i
?? �ǵ�i����������Ȼ��d
?1
?? =1���Ҷ���n>1��d
?n
?? ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������

�ָ�������������N(<10
?5
?? )������㲻����N���������������Եĸ�����

�����ʽ:
������һ�и���������N��

�����ʽ:
��һ�������������N���������������Եĸ�����

��������:
20
�������:
4
*/

//�ж�һ�����Ƿ�Ϊ���� 
int judge(int n){
	if(n==1)return 0;
	else if(n==2||n==3||n==5)return 1;
	else if(n==4)return 0;
	else{
		int temp = sqrt(n);
		for(int j=2;j<=temp+1;j++){
			if(n%j==0)return 0;
		}
		return 1;
	}
}
int main(){
	int n,i,sum;
	while(cin>>n){
		i=3;
		sum=0;
		while(i<=n){
			//��һ����3��ʼ����Ϊ3-2=1��������������Ҫ���Ϊ2
			if(judge(i)==1){
				if(i+2<=n&&judge(i+2)==1){
					sum++;
					i=i+2;
				}
				else i=i+4;
			}	
			else i=i+2; 
		}
		cout<<sum<<endl;
	}
	return 0;
} 
