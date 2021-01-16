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
    int i , j , k , l , m , n;
    string str;

    while(getline(cin,str)){
        l = str.size();
        n = -1;

        for(i = 0 ; i < l ; i++){
            if(str[i]==' ')
            {
                for(j = i-1 ; j>n ; j--){
                    printf("%c",str[j]);
                }
                putchar(' ');
                n = i;
            }
        }

        for(k = l-1 ; k>n ;k--){
            printf("%c",str[k]);
        }
        putchar('\n');
    }
}

int main(){
    solve();
    return 0;
}
