#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    scanf("%d",&n);
    cin.ignore();
    for(int i = 0 ; i < n ; i++)
    {
        int N,K;
        string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        printf("Case %d:\n",i+1);
        cin>>N>>K;
        if(N==1 && K>1) K=1;
        if(N==2 && K>2) K=2;
        if(N==3 && K>6) K=6;
        if(N==4 && K>24)K=24;
        str.erase(N);
        cout<<str<<endl;
        while(--K)
        {
            next_permutation(str.begin(),str.end());
            cout<<str<<endl;
        }
    }
    return 0;
}
