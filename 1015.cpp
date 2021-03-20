#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
//德才论，题目太长 
typedef struct student{
	long long int id;
	int de,cai;
}student;
bool compare(student a,student b){
	//两个结构体之间的比较函数
	int sum_a,sum_b;
	sum_a=a.de+a.cai;
	sum_b=b.de+b.cai;
	if(sum_a>sum_b)return 1;
	else if(sum_a==sum_b){
		if(a.de>b.de)return 1;
		else if(a.de<b.de)return 0;
		else
			return a.id<b.id;
	} 
	else return 0;
}
int main(){
	int N,L,H;
	cin>>N>>L>>H;
	int i=0;
	vector<student>arr1,arr2,arr3,arr4;
	student node;
	while(i<N){
		cin>>node.id>>node.de>>node.cai;
		if(node.de>=H&&node.cai>=H)arr1.push_back(node);
		else if(node.de>=H&&node.de>=L&&node.cai>=L)arr2.push_back(node);
		else if(node.de>=node.cai&&node.de>=L&&node.cai>=L)arr3.push_back(node);
		else if(node.de>=L && node.cai >=L)arr4.push_back(node);
		else{}
		i++;
	}
	if(arr1.size()!=0)sort(arr1.begin(),arr1.end(),compare);
	if(arr2.size()!=0)sort(arr2.begin(),arr2.end(),compare);
	if(arr3.size()!=0)sort(arr3.begin(),arr3.end(),compare);
	if(arr4.size()!=0)sort(arr4.begin(),arr4.end(),compare);
	int lang=arr1.size()+arr2.size()+arr3.size()+arr4.size();
	cout<<lang<<endl;
	for(int j=0;j<arr1.size();j++)
		cout<<arr1[j].id<<" "<<arr1[j].de<<" "<<arr1[j].cai<<endl;
	for(int j=0;j<arr2.size();j++)
		cout<<arr2[j].id<<" "<<arr2[j].de<<" "<<arr2[j].cai<<endl;
	for(int j=0;j<arr3.size();j++)
		cout<<arr3[j].id<<" "<<arr3[j].de<<" "<<arr3[j].cai<<endl;
	for(int j=0;j<arr4.size();j++)
		cout<<arr4[j].id<<" "<<arr4[j].de<<" "<<arr4[j].cai<<endl;
	return 0;
} 
