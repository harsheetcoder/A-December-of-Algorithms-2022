#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s.length();
    if(a%2!=0)
    {
        a--;
    }
    for(int i=0;i<a;i+=2)
    {
        swap(s[i],s[i+1]);
    }
    cout<<s;
    return 0;
}
