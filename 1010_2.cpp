#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m;
	vector<int>arr;
	bool judge=true;
	while(cin>>n>>m){
	//������cin����scanf EOF������һ�к󣬻س���ctrl+z���ٻس�������ȷ��������ֹ���� 
		if(n!=0&&m!=0){
			//ֻ�Է���������������,���Բ���Ϊ0���� 
			arr.push_back(n*m);
			arr.push_back(m-1);
			judge=false;
		}
		else if(judge==true){
			//�ж��Ƿ��һ������ 
			arr.push_back(0);
			arr.push_back(0);
			break;
		}
		else break;
	} 
	for(int i=0;i<arr.size()-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<arr[arr.size()-1]<<endl;
	return 0;
}
