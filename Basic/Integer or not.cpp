
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter The Number :\n";
    float n;
    cin>>n;
    int res=n/1;
    if(n<=0 || n>=0 && res*1==n)
    {
        cout<<"Entered Number Is An Integer.\n";
    }
    else
    {
        cout<<"Entered Number Is Not An Integer.\n";
    }
}