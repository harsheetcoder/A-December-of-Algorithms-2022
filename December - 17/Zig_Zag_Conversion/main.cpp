#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,n;
    string s;
    vector<string> v;
    cin>>s>>r;
    n=s.length();
    for(int i=0;i<r;i++)
    {
        v.push_back({s[i]});
    }
    for(int i=r;i<n;i)
    {
        for(int j=r-2;j>0;j--)
        {
            v[j].push_back(s[i]);
            i++;
            if(i==n)
            {
                break;
            }
        }
        if(i==n)
        {
            break;
        }
        for(int j=0;j<r;j++)
        {
            v[j].push_back(s[i]);
            i++;
            if(i==n)
            {
                break;
            }
        }
        if(i==n)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    return 0;
}
