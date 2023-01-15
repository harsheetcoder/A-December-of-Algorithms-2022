#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b+=a;
        c=max(c,b);
        if(b<0)
        {
            b=0;
        }
    }
    cout<<c;
    return 0;
}
