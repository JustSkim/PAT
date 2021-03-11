#include<stdio.h>
#include<iostream>
using namespace std;
/*
设计函数求一元多项式的导数。
输入格式:
以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。

输出格式:
以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是 0，但是表示为 0 0。

输入样例:
3 4 -5 2 6 1 -2 0
输出样例:
12 3 -10 1 6 0
*/ 
int main(){
	int n,m;
	bool judge=true;
	while(cin>>n>>m){	////当不输入int型数据时停止输入，如输入Enter时停止输入
		if(m==0&&judge==true)cout<<"0 0"<<endl;	//输入的只有一项且为常数项时 
		else if(m==0)break;//常数项必为最后一项，直接跳出 
		else{
			if(!judge)cout<<" ";//只要不是第一项的，其前面都要输出空格 
			else{
				judge=false;
			}
			cout<<n*m<<' '<<m-1;//最后一项自然无空格 
		}
	}
	return 0;
}
