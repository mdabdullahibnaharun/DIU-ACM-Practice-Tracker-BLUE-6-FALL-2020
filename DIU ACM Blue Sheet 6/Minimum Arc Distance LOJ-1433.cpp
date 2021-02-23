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


void solve(){
    int tc;
    scanf("%d",&tc);
    for(int i = 1 ; i<=tc ; i++){
        int ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double O,A,B,angle,arcdistance;
        O = sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        A = sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        B = sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by)));
        angle = acos((sqre(A)+sqre(B)-sqre(O))/(2.0*A*B));
        arcdistance = A*angle;
        printf("Case %d: %lf\n",i,arcdistance);
    }

}

int main(){
    solve();
    return 0;
}
