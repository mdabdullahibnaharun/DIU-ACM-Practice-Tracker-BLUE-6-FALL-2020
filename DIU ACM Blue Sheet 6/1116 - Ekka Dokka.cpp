#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i,j,m;
    long int w,p;
    scanf("%d",&t);
    for(i =1; i<=t; i++)
    {
        cin>>w;
        if(w%2!=0)
        {
            printf("Case %d: Impossible\n",i);
        }
        else
        {
            p=w;
            m = 1;
            while(p%2==0)
            {
                m*=2;
                p/=2;
            }
            printf("Case %d: %ld %d\n",i,p,m);
        }
    }
    return 0;
}
