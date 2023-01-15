#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int> v1;
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a;
            v1.push_back(a);
        }
        v.push_back(v1);
        v1.clear();
    }
    a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(v[i][j]!=v[j][i])
            {
                a++;
                break;
            }
        }
        if(a!=0)
        {
            break;
        }
    }
    a==0?cout<<"The graph is Bipartite!":cout<<"The graph is NOT Bipartite!";
    return 0;
}
