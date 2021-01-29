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


void solve(){
    int tc,i=1;
    scanf("%d",&tc);
    while(tc--){
        int a,b,e;
        scanf("%d %d",&a,&b);
        if(a<=b){
            e = (b*4)+6+5+3+5;
            printf("Case %d: %d\n",i,e);
            i++;
        }
        else{
            e = (2*a-b)*4+6+5+3+5;
            printf("Case %d: %d\n",i,e);
            i++;
        }

    }
}

int main(){
    solve();
    return 0;
}
