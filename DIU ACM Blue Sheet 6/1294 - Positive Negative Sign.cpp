#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;
    cin>>t;
    long long int n,m;

    for(int i=1; i<=t; i++)

    {
        cin>>n>>m;
        printf("Case %d: %lld\n",i,(n*m)/2);
    }

    return 0;
}
*/


int main()
{
    int p=1,q=1,t,i=1;
    long long int n,m,sum=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n>>m;
        /*
        for(int j = 1; j<=n; j++)
        {
            if(p!=m){
                sum-=j;
                p++;
                q=1;
            }
            else if(q!=m){
                sum+=j;
                q++;
                p=1;
            }
        }*/

        printf("Case %d: %d\n",i++,(n*m)/2);
        //sum=n=m=0;
    }
    return 0;
}
