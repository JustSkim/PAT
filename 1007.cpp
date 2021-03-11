#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
/*
1007 素数对猜想 (20 分)
让我们定义d
?n
?? 为：d
?n
?? =p
?n+1
?? ?p
?n
?? ，其中p
?i
?? 是第i个素数。显然有d
?1
?? =1，且对于n>1有d
?n
?? 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N(<10
?5
?? )，请计算不超过N的满足猜想的素数对的个数。

输入格式:
输入在一行给出正整数N。

输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。

输入样例:
20
输出样例:
4
*/

//判断一个数是否为素数 
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
			//第一个从3开始，因为3-2=1，不符合素数对要求差为2
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
