#include<stdio.h>
#include<iostream>
using namespace std;
/*
��򵥵���ӱȽ�
���κ��Ѷȣ���longlong���ͼ���

https://pintia.cn/problem-sets/994805260223102976/problems/994805312417021952
�������� [-2^31,2^31] �ڵ� 3 ������ A��B �� C�����ж� A+B �Ƿ���� C��
�����ʽ��
����� 1 �и��������� T (��10)���ǲ��������ĸ����������� T �����������ÿ��ռһ�У�˳����� A��B �� C���������Կո�ָ���

�����ʽ��
��ÿ�������������һ������� Case #X: true ��� A+B>C��������� Case #X: false������ X �ǲ��������ı�ţ��� 1 ��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/
int main(){
    int N;
    long long int a,b,c;
    cin>>N;
    int i=1;
    while(i<=N){
        cin>>a>>b>>c;
        if(a+b>c)cout<<"Case #"<<i<<": "<<"true"<<endl;
        else  cout<<"Case #"<<i<<": "<<"false"<<endl;
        i++;
    }
    return 0;
}
/*
C�����������ʹ�С��
1. signed char                    1		-2^7~2^7-1  -128~127

   short int��short              2		-2^15~2^15-1  -32768~32767

   int                                   4         -2^31~2^31-1   

   long int ��long               4          -2^31~2^31-1   ��ռ�ֽ����ͱ�ʾ��Χ��int������ͬ�� 

   long long int ��long long  8       -2^63~2^63-1

   ```ע 
   long��int����׼ֻ�涨long��С��int�ĳ��ȣ�int��С��short�ĳ��ȡ�
   
   double��int���͵Ĵ洢���Ʋ�ͬ��long int��8���ֽ�ȫ����������λ����double����β����������ָ������ʽ��ʾ�ģ����ƿ�ѧ�����������double��int�ܱ�ʾ�����ݷ�Χ���㡣
   
   long long��win32����ȷʵ���ڣ�����Ϊ8���ֽڣ�����ΪLONG64��
   Ϊʲô�����long int�أ���win32����ϵͳ�У�����Ϊ4������ʷ�ϣ���������ĳЩϵͳ�У�int����Ϊ2����short int��
   ```

   

2. �޷�����������

   unsigned char                                                     1		0~2^8-1   255

   unsigned short int �� unsigned short                 2		0~2^16-1 65355

   unsigned int                                                        4		0~2^32-1

   unsigned long int �� unsigned long                   4		0~2^32-1

   unsigned long long int �� unsigned long long  8		0~2^64-1

3. ��������

   float					 4		-3.4e38~+3.4e38

   double 				8		-1.7e308~+1.7e308

   long double		12		-1.19e4932~+1.19e4932

 
*/
