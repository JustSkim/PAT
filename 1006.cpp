#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
/*
1006
����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����������ʽ�������һ�������� 3 λ�������������� 234 Ӧ�ñ����Ϊ BBSSS1234����Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��

�����ʽ��
ÿ������������� 1 ���������������������� n��<1000����

�����ʽ��
ÿ���������������ռһ�У��ù涨�ĸ�ʽ��� n��

�������� 1��
234
������� 1��
BBSSS1234
�������� 2��
23
������� 2��
SS123
*/
int main(){
	int n,bai,shi,ge;
	string str;
	while(cin>>n){
		str.clear();//ÿ��ʹ��Ҫ��� 
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
				str.push_back('0'+i);//������תΪ�ַ��� 
			}
		}
		cout<<str<<endl;
	}
	return 0;
}
