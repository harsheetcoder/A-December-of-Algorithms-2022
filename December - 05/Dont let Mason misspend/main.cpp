#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n=(n*31+18)*2;
    cout<<n<<endl;
    n<=5000?cout<<"EXPENDITURE WITHIN LIMIT":cout<<"EXPENDITURE EXCEEDING LIMIT";
    return 0;
}
