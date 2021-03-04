#include<bits/stdc++.h>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;


void solve()
{
    int t,n,q,i,j=0,a,b,point1,point2,sub;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
      	sort(arr,arr+1);
        printf("Case %d:\n",++j);
        while(q--)
        {
            cin>>a>>b;
            point1 = lower_bound(arr,arr+n,a)-arr;
            point2 = upper_bound(arr,arr+n,b)-arr;
            sub = point2-point1;
            printf ("%d\n",sub) ;
        }
    }

}

int main()
{
    solve();
    return 0;
}