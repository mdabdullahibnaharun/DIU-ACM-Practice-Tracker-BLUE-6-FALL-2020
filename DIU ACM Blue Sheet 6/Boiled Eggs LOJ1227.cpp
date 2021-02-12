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


int main()
{
    int n, p, q, tst, i, j;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d%d%d", &n, &p, &q);
        int weight[n], cnt=0, sum=0;
        for(j=0; j<n ;j++)
        {
            scanf("%d", &weight[j]);
            sum += weight[j];
            if(cnt<p && sum<=q) cnt++;
        }
        printf("Case %d: %d\n", i, cnt);
    }
    return 0;
}
