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
const int MAXN = 1e5 + 3;


void solve(){

    lli x1,y1,z1,x2,y2,z2;
    int i,tc;
    scanf("%d",&tc);

    for(i=1;i<=tc;i++){

        lli a=0,b=0,c=0,d=MAX,e=MAX,f=MAX;
        int n;
        scanf("%d",&n);

        while(n--){

            scanf("%lld %lld %lld %lld %lld %lld",&x1,&y1,&z1,&x2,&y2,&z2);
            a = max(a,x1);
            b = max(b,y1);
            c = max(c,z1);
            d = min(d,x2);
            e = min(e,y2);
            f = min(f,z2);
        }

        printf("Case %d: ",i);
        if(f>c && e>b && d>a){
            cout<<(f-c)*(e-b)*(d-a)<<endl;
        }
        else{
            printf("%d\n",0);
        }
    }
}

int main(){
    solve();
    return 0;
}
