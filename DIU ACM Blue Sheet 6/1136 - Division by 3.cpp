#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main()
{
    int i=0,q=1,t,cnt1=0,cnt2=0;
    long long int a,b,s=0;
    cin>>t;
    int p = 1;
    cin.ignore();
    while(t--)
    {
        cin>>a>>b;
        cnt1 = b/3*2;
        if(b%3==2)
        {
            cnt1++;
        }
        cnt2 = a/3*2;
        if(a%3==0)
        {
            cnt2--;
        }
        i++;
        cout<<"Case "<<i<<": "<<cnt1-cnt2<<endl;
    }
    return 0;

}

































/*
cnt1 = b/3*2;
if(b%3==2)
{
    cnt1++;
}
cnt2 = a/3*2;
if(a%3==0){
    cnt2--;
}
*/
