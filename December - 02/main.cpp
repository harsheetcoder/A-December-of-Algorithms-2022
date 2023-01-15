#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string s1;
    s1.push_back(s[s.length()-4]);
    s1.push_back(s[s.length()-3]);
    for(int i=0;i<s.length()-4;i++)
    {
        s1.push_back(s[i]);
    }
    cout<<s1;
    return 0;
}
