#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
һ�����ѵ��ж���ex����
��̽����Ħ˹�ӵ�һ����ֵ�����������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm������̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04����Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ��� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ�����������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��
������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����

�����ʽ��
��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
���������
THU 14:04

�������nowcoder��oj�ж� 
https://www.nowcoder.com/pat/6/problems
*/
int main(){
	string s1,s2,s3,s4;
	string day,min;
	int hour=0;
	int index=1;
	int i=0,min_index=0;
	
	//stringҲ�������飡 
	string dayList[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	
	int hourList[15]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,00};
	getline(cin,s1);//��ȡ�����ո񣨵�Ȼ���ⲻ��Ҫ�����������س����ַ��� 
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
