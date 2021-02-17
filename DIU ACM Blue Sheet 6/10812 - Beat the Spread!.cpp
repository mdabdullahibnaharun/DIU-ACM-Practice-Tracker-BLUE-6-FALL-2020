#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;


void solve()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        lli s,d;
        cin>>s>>d;
        if(d>s)
        {
            printf("impossible\n");
        }
        else
        {
            lli sum,sub;
            sum=(s+d)/2;
            sub=(s-d)/2;
            if((s+d)%2!=0)
            {
                printf("impossible\n");
            }
            else
            {
                printf("%ld %ld\n",sum,sub);
            }
        }
    }

}

int main()
{
    solve();
    return 0;
}
