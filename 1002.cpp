#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
PAT (Basic Level) Practice �����ģ�
����
ԭPAT��վ�û����� https://patest.cn/bind_old_pat_user ҳ�����ƴ��A�˺š��󶨺�ԭPAT��վ���ύ�����ϲ���ƴ��A��վ�û��Ķ�Ӧ��Ŀ���С�

1002 д������� (20 ��)
����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10
?100
?? ��

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/
int main(){
    string str;
    string arr[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    vector<int>arr1;
    int sum,temp;
    while(cin>>str){
    	arr1.clear();//���vector���� ÿ�ι���Ҫ���� 
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
