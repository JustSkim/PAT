#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
const int MAXN=1000;//���δ���ʱ��Ҫ��������һ�� 
string fname[MAXN];
string lname[MAXN];
int grade[MAXN];
/*
���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��
ÿ������������� 1 ��������������ʽΪ

�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��
��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�

����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������
Mike CS991301
Joe Math990112
*/
int main(){
    int N;
    while(cin>>N){
        int i=0;
        cin>>fname[i]>>lname[i]>>grade[i];
        //��Ҫ�������壬ѧ��Ҳ�������ַ�����ʽ���ͺ���һ������һ�����һ������������û��Ӱ��ģ� 
        
        int max,min,max_index,min_index;
        max=grade[i],min=grade[i],max_index=0,min_index=0;
        i++;
        while(i!=N){
            cin>>fname[i]>>lname[i]>>grade[i];
            if(grade[i]>max){
                max=grade[i];
                max_index=i;
            }
            else if(grade[i]<min){
                min=grade[i];
                min_index=i;
            }
            i++;
        }
        cout<<fname[max_index]<<" "<<lname[max_index]<<endl;
		cout<<fname[min_index]<<" "<<lname[min_index]<<endl;			
    }
    return 0;
}
