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
    int test;
    cin>>test;
    cin.ignore();
    while(test--){
        int n ;
        cin>>n;
        int sum =(((((n*567)/9)+7492)*235)/47)-498;
        printf("%d\n",abs(sum/10%10));
    }

}

int main(){
    solve();
    return 0;
}
