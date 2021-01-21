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
    int i,test;
    cin>>test;
    cin.ignore();
    for(i = 1 ; i<= test ; i++){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        printf("Case %d: %d\n",i,arr[1]);
    }
}

int main(){
    solve();
    return 0;
}
