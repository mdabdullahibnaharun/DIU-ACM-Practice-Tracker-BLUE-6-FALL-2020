#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double ca,sa,a,r;
    cin>>t;
    cin.ignore();
    for(int i = 1 ; i<=t ; i++){
        cin>>r;
        ca = 2*acos(0.0)*r*r;
        sa = (r*2)*(r*2);
        printf("Case %d: %.2lf\n",i,sa-ca);
    }
    return 0;
}
