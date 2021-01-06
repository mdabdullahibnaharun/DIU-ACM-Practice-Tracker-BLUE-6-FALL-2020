#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s=0;
    cin>>t;
    for(int i =1 ; i<=t ; i++){
        int p;
        cin>>p;
        while(p--){
            int k;
            cin>>k;
            if(k>0)s+=k;
        }
        printf("Case %d: %d\n",i,s);
        s=0;
    }
    return 0;
}
