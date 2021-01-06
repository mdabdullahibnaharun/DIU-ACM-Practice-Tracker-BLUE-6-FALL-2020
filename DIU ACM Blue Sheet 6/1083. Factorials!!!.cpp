#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int sz = s.size();
    //cout<<sz<<endl;
    unsigned  long long sum=1;
    for(int i = n ; i > 0 ; i=i-sz)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;

    return 0;
}
