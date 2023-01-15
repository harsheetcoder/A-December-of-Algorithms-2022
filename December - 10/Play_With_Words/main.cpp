#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                a++;
            }
            else
            {
                a=0;
            }
            if(a==4)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(a<4)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
