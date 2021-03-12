#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m;
	vector<int>arr;
	bool judge=true;
	while(cin>>n>>m){
	//无论是cin还是scanf EOF，输入一行后，回车，ctrl+z，再回车，才能确定输入终止！！ 
		if(n!=0&&m!=0){
			//只对非零项进行输出操作,所以不可为0或常数 
			arr.push_back(n*m);
			arr.push_back(m-1);
			judge=false;
		}
		else if(judge==true){
			//判断是否第一个非零 
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
