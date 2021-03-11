#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

/*
1003
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ����������� PAT �ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

�ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
�������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
���ھ�����Ϊ PAT дһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�

�����ʽ��
ÿ������������� 1 �������������� 1 �и���һ�������� n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ����� 100���Ҳ������ո�

�����ʽ��
ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ��������� YES��������� NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO

ע����Ŀ��һ���ȽϿӵĵ㣡��
���Բ��� https://www.kanzhun.com/jiaocheng/306414.html 


�������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
��ô��ȷ������Щ��
PAT
APATA
AAPATAA
AAAPATAAA
...��˵�ˣ������м�һ��A���Ҽ��ϵ�����A������Ҳ�У�������ȷ�ġ�

��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
��������Ǽ�����ȷ�ľ����ӣ���ô��ȷ������Щ��
PAT ���� ���� aPbTc ��˵ac�ǿգ�b��A������ PAAT ����ȷ�ġ�ͬ��PAAAAAT�м�Ӷ��ٸ�A������ȷ��~
APATA ���� ����aPbTc��˵��abc����A������ APAATAA ����ȷ�ġ�������һ�£���ô APAAATAAA ����ȷ�ġ�
AAPATAA ���� ����aPbTc��˵��a��c��AA��b��A������AAPAATAAAA����ȷ�ģ�������һ�£�AAPAAATAAAAAA ����ȷ��~ 
����˵���ɾ��ǣ�������P��T�м��A������T�����A��Ҫ������ǣ��м����һ��A��ĩβ�͵ü��ϼ�����(Pǰ��A���Ǹ��ַ���)�����仰˵���ǣ��м��A�ĸ��������3����ôĩβ��A�ĸ����͵��ǿ�ͷA�ĸ�����3�������ɣ����м�AΪһ����ʱ��ĩβ�Ϳ�ͷA�ĸ���������������ǵڶ�����Ҫ��~~~

����һ�仰�ܽ��ַ�����Ҫ��ֻ����һ��Pһ��T���м�ĩβ�Ϳ�ͷ����������A�����Ǳ������㿪ͷ��A�ĸ��� * �м��A�ĸ��� = ��β��A�ĸ���������P��T֮�䲻��û��A�� 
*/
int main(){
	int n;
	string str;
	int p,a_f,a_mid,a_af,t,stop;
	while(cin>>n){
		while(n--){
			cin>>str;
			p=0;
			t=0;
			a_f=0;
			a_mid=0;
			a_af=0;
			stop=0;
			for(int i=0;i<str.length();i++){
				if(str[i]==' ')continue;
				else if(str[i]=='A'){
					if(p==0){
						a_f++;
					}
					else if(p==1&&t==0){
						a_mid++;
					}
					else if(p==1&&t==1){
						a_af++;
					}
				}
				else if(str[i]=='T'){
					t++;
					if(t>1 || p==0){
						cout<<"NO"<<endl;
						stop=1;
						break;
					}
				}
				else if(str[i]=='P'){
					p++;
					if(p>1){
						cout<<"NO"<<endl;
						stop=1;
						break;
					}
				}
				else{
					cout<<"NO"<<endl;
					stop=1;
					break;
				}
			}
			if(stop==1)continue;
			else{
				if(a_mid==0)cout<<"NO"<<endl;
				else if(p==1&&t==1){
					if(a_f==0&&a_af==0)cout<<"YES"<<endl;
					else if(a_f!=0&&a_f*a_mid==a_af)cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
				}
				else cout<<"NO"<<endl; 
			}
		}
	}
	return 0;
} 
