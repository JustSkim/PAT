#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
const int MAXN=1000;
int arr[MAXN];
vector<int>result;

int main(){
	int n,temp;
	int i=0;
	void judge(int j,int i);	
	while(cin>>n){
		/*
		//牢记每次输入第一步先初始化！ 
		while(cin>>arr[i]){
			i++;
		}
		*/
		arr[0]=3;
		arr[1]=5;
		arr[2]=6;
		arr[3]=7;
		arr[4]=8;
		arr[5]=11;
		i=6;
		int a,m;
		for(int j=0;j<i;j++){
			if(arr[j]!=0){
				a=arr[j];
				while(a!=1){
					for(m=0;m<i;m++){
						if(m!=j&&arr[m]==a){
							result.push_back(arr[m]);
							arr[m]=0;
						}		
					}
					if(a%2==0)a=a/2;
					else a=(3*a+1)/2; 
				}
			}			
		}
		for(int k=0;k<result.size();k++){
			cout<<result[k]<<" ";
		}
	}
	return 0;
}

