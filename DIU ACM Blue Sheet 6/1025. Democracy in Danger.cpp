#include<bits/stdc++.h>

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
#include <stdbool.h>
#include <cstdio>
#include <vector>
#include <set>

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
    int i,k;
    cin>>k;
    int diff=0,sup[MAX];
    for(i=0;i<k;i++)
        cin>>sup[i];

    sort(sup,sup+k);

    for(i=0;i<(k/2)+1;i++){
        diff+=(sup[i]/2)+1;
    }

    cout<<diff<<endl;

}

int main(){
    solve();
    return 0;
}
