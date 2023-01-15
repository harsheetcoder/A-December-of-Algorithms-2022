#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1;
    cin>>s>>s1;
    int a=0,b=s.length();
    for(int i=0;i<s1.length();i++)
    {
        s1[i]=s1[i]+s[a]-'A';
        if(s1[i]>'Z')
        {
            s1[i]-=26;
        }
        a++;
        if(a==b)
        {
            a=0;
        }
    }
    cout<<s1;
    return 0;
}
