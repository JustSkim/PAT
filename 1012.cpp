#include<cstdio>
#include<iostream>
using namespace std;
/*
1012逻辑不难，难在各种输出格式，以及A2是否存在的问题！ 


给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

A
?1
??  = 能被 5 整除的数字中所有偶数的和；
A
?2
??  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n
?1
?? ?n
?2
?? +n
?3
?? ?n
?4
?? ?；
A
?3
??  = 被 5 除后余 2 的数字的个数；
A
?4
??  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A
?5
??  = 被 5 除后余 4 的数字中最大数字。
输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。

输出格式：
对给定的 N 个正整数，按题目要求计算 A
?1
?? ~A
?5
??  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出 N。

输入样例 1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例 1：
30 11 2 9.7 9
输入样例 2：
8 1 2 4 5 6 7 9 16
输出样例 2：
N 11 2 N 9

*/
int main(){
	int N,temp;
	int i;
	long int sum_0,sum_1;
	int num_2,num_3,max_4,zhengfu,change_1;
	double sum_3=0;
	i=0;
	sum_0=0,sum_1=0;
	num_2=0,num_3=0,max_4=0,zhengfu=1;
	
	change_1=0;
	/*
	https://tieba.baidu.com/p/4882096596
注意！！	对于A2，
			A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4…；
			如果存在这些n，但最后结果是0。。就有A2=0但却是存在的，不该输出"N"，
			所以要设一个变量 
	*/
	
	cin>>N;
	while(i!=N){
		cin>>temp;
		//输入的均为正整数，所以不必考虑0 
		if(temp%5==0){
			if(temp%2==0)sum_0+=temp;
		}
		else if(temp%5==1){
			sum_1+=temp*zhengfu;
			zhengfu=-zhengfu;
			change_1=1;
		}
		else if(temp%5==2){
			num_2++; 
		}
		else if(temp%5==3){
			sum_3+=temp;
			num_3++;
		}
		else{
			//剩下的都是除5余4的
			if(temp>max_4)max_4=temp;
		}
		i++;
	}
	if(sum_0==0)cout<<"N ";
	else cout<<sum_0<<" ";
	if(change_1==0)cout<<"N ";
	else cout<<sum_1<<" ";
	if(num_2==0)cout<<"N ";
	else cout<<num_2<<" ";
	if(sum_3==0)cout<<"N ";
	else{
		printf("%.1f ",(double)sum_3/num_3);//输出小数点后仅一位的浮点数格式 
		//注意，数据类型转换！！ 
	}
	if(max_4==0)cout<<"N";
	else cout<<max_4;
	return 0;
} 
