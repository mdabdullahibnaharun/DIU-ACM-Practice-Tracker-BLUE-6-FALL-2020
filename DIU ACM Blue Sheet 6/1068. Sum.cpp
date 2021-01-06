#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;

    }
    else if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    else if(n<0)
    {
        for(int i=-1; i>=n; i--)
        {
            sum+=i;
        }
        cout<<++sum<<endl;
    }
    return 0;
}

