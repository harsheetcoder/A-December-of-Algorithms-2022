#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        string s;
        string s1;
        string s2;
        int a=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=',')
            {
                    if(s[i]=='A')
                    {
                        a=a*16+10;
                    }
                    else if(s[i]=='B')
                    {
                        a=a*16+11;
                    }
                    else if(s[i]=='C')
                    {
                        a=a*16+12;
                    }
                    else if(s[i]=='D')
                    {
                        a=a*16+13;
                    }
                    else if(s[i]=='E')
                    {
                        a=a*16+14;
                    }
                    else if(s[i]=='F')
                    {
                        a=a*16+15;
                    }
                    else
                    {
                        a=a*16+(s[i]-'0');
                    }
            }
            else
            {
                cout<<char(a);
                a=0;
            }
        }
        cout<<char(a);
    }
    return 0;
}
