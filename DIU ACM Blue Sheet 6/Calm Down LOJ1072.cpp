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
const int MAX = 500005;
const int MAXN = 1e5 + 3;


void solve(){
    double R,n;
    int i=0,tc;
    scanf("%d",&tc);
    while(tc--){
        cin>>R>>n;
        double angle = sin(PI/n);
        double r = (angle*R)/(1+angle);
        cout<<setprecision(10)<<"Case "<<++i<<": "<<r<<endl;
    }
}

int main(){
    solve();
    return 0;
}
