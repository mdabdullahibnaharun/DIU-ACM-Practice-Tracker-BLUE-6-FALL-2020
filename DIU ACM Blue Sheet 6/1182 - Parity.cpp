#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i = 1 ; i<=t; i++)
    {
        int p,c=0;
        cin>>p;
        while(p)
        {
            c+=p%2;
            p=p/2;
        }
        if(c%2)
        {
            printf("Case %d: odd\n",i);
        }
        else
        {
            printf("Case %d: even\n",i);
        }
    }
    return 0;
}
