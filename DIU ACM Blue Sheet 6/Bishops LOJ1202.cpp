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


void solve(){

    int tc,i=1;
    scanf("%d",&tc);
    while(tc--){
        int m,n, r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        m=abs(r1-r2);
        n=abs(c1-c2);
        if(m==n){
            printf("Case %d: 1\n",i++);
        }
        else if(m!=n){
            if(m%2==n%2){
                printf("Case %d: 2\n",i++);
            }else{
                printf("Case %d: impossible\n",i++);
            }
        }
    }
}


int main(){
    solve();
    return 0;
}