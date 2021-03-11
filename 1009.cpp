#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int spacenumber[81] = {0};
    int i = 0,j= 0;

    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            if(s[i+1]==' ')
                return 0;
            spacenumber[j++] = i;

        }
        i++;
    }

    j--;

    while(j>=-1)
    {

        if(j==-1)
        {
            i = 0;
            j--;
        }
        else
            i = spacenumber[j--]+1;
           // cout<<"j"<<j<<"i"<<i;
        while(s[i]!='\0'&&s[i]!=' ')
        {
            cout<<s[i];
            i++;
        }
        if(j>-2)
            cout<<' ';
    }

}

