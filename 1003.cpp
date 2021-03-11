#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

/*
1003
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO

注意题目里一个比较坑的点！！
来自博客 https://www.kanzhun.com/jiaocheng/306414.html 


任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
那么正确的有这些：
PAT
APATA
AAPATAA
AAAPATAAA
...不说了，就是中间一个A左右加上等量的A（不加也行）都是正确的。

如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
拿上面的那几个正确的举例子，那么正确的有这些：
PAT —— 对于 aPbTc 来说ac是空，b是A。所以 PAAT 是正确的。同理PAAAAAT中间加多少个A都是正确哒~
APATA —— 对于aPbTc来说，abc都是A。所以 APAATAA 是正确的。再类推一下，那么 APAAATAAA 是正确的。
AAPATAA —— 对于aPbTc来说，a和c是AA，b是A。所以AAPAATAAAA是正确的，再类推一下，AAPAAATAAAAAA 是正确的~ 
所以说规律就是，可以在P和T中间加A并且在T后面加A，要求必须是，中间加上一个A，末尾就得加上几倍的(P前面A的那个字符串)。换句话说就是，中间的A的个数如果是3，那么末尾的A的个数就得是开头A的个数的3倍。很巧，当中间A为一个的时候，末尾和开头A的个数必须相等正好是第二条的要求~~~

所以一句话总结字符串的要求：只能有一个P一个T，中间末尾和开头可以随便插入A。但是必须满足开头的A的个数 * 中间的A的个数 = 结尾的A的个数，而且P和T之间不能没有A～ 
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
