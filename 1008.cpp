#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<vector>
using namespace std;
/*
1008
һ������A�д���N��>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M����0����λ�ã�����A�е������ɣ�A
���M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����

�����ʽ:
ÿ���������һ��������������1������N��1��N��100����M����0������2������N��������֮���ÿո�ָ���

ע�⣡����û��˵Mһ��С�ڵ���N 

�����ʽ:
��һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�

��������:
6 2
1 2 3 4 5 6
�������:
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
			//ע��M��ֵ���ܱ�NҪ������Ҫȡ�� 
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
