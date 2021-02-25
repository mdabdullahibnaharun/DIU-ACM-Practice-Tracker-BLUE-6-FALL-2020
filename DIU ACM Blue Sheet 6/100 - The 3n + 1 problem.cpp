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

int outvalue(int n){
    int i = 0;
    while(TRUE){
        i++;
        if(n==1){
            break;
        }
        else if(n%2!=0){
            n=(3*n)+1;
        }
        else{
            n=n/2;
        }
    }
    return i;
}

void solve(){
    int i,p,a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int maximum = 0;
        printf("%d %d ",a,b);
        if(b<a){
            int temp = a;
            a = b;
            b = temp;
        }
        for( i = a ; i<=b ; i++){
            p = outvalue(i);
            if(p>=maximum)
                maximum = p;
        }
        printf("%d\n",maximum);
    }
}

int main(){
    solve();
    return 0;
}
