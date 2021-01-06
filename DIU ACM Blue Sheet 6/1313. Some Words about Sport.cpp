#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t;
    scanf("%d",&t);
    if(t<=100)
    {
        for(int i = 1 ; i<= t*t; i++)
        {
            int p;
            scanf("%d",&p);
            //if(p<=100)
            v.push_back(p);
        }
    }
    sort(v.begin(),v.end());
    for(auto i : v)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
