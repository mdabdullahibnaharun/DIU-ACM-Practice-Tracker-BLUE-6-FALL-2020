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

void solve(){
    int i=1,r1,r2,h,p;
    int test;
    scanf("%d",&test);
    double R, V;
    while(test--){
        cin>>r1>>r2>>h>>p;
        R = r2 + (r1 - r2 )* (double(p)/h);
        V = 1/3.0 * PI * p * (R*R + R*r2 + r2*r2);
        printf("Case %d: %lf\n",i++,V);
    }
}

int main(){
    solve();
    return 0;
}
