
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
const int MAX = 1000005;


void solve()
{
    int tc;
    scanf("%d",&tc);
    for(int i = 1 ; i <= tc ; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int m;
        if(a%2!=0 && b%2!=0){
            printf("Case %d: %d\n",i,((a*b)/2)+1);
        }
        else{
            printf("Case %d: %d\n",i,((a*b)/2));
        }
    }
}

int main()
{
    solve();
    return 0;
}
