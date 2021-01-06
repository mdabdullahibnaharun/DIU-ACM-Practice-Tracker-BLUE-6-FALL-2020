#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int j = 1 ; j<=t ; j++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int p;
        cin>>p;
        printf("Case %d:\n",j);
        while(p--){
            int x,y;
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}
