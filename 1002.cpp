#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
PAT (Basic Level) Practice （中文）
公告
原PAT网站用户可在 https://patest.cn/bind_old_pat_user 页面绑定至拼题A账号。绑定后，原PAT网站的提交将被合并至拼题A网站用户的对应题目集中。

1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
?100
?? 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/
int main(){
    string str;
    string arr[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    vector<int>arr1;
    int sum,temp;
    while(cin>>str){
    	arr1.clear();//清空vector容器 每次过后都要！！ 
        sum=0;
		temp=0;
        for(int i=0;i<str.length();i++)
            sum+=str[i]-'0';
        //cout<<"sum = "<<sum<<endl; 
        while(sum>=10){
            temp=sum%10;
            arr1.push_back(temp);
            sum=sum/10;
        }
        arr1.push_back(sum);
        
        for(int j=arr1.size()-1;j>0;j--)
        	cout<<arr[arr1[j]]<<" ";
        cout<<arr[arr1[0]]<<endl;
    }
    return 0;
}
