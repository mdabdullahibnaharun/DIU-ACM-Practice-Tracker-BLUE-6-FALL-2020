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

void solve()
{
    int test;
    scanf("%d",&test);

    for(int i  = 1 ; i <= test ; i++)
    {
        int n,m;
        int D,l;
        int a,b,z;
        int temp;
        scanf("%d %d",&n,&m);

        int arr[n];

        for(int j = 0 ; j<n ; j++){
            scanf("%d",&arr[j]);
        }

        for(int k = 0 ; k<m ; k++)
        {
            char cm[2];
            scanf("%s",&cm);

            if(cm[0]=='S' || cm[0]=='s'){
                scanf("%d",&D);
                for( l = 0 ; l<n ; l++)
                    arr[l]+=D;
            }
            else if(cm[0]=='M' || cm[0]=='m'){
                scanf("%d",&D);
                for( l = 0 ; l<n ; l++)
                    arr[l]*=D;
            }
            else if(cm[0]=='D' || cm[0]=='d'){
                scanf("%d",&D);
                for( l = 0 ; l<n ; l++)
                    arr[l]/=D;
            }
            else if(cm[0]=='R' || cm[0]=='r'){
                for( a = 0, b = n-1 ; a < n/2 ; a++, b--){
                    temp = arr[a];
                    arr[a] = arr[b];
                    arr[b] = temp;
                }
            }
            else if(cm[0]=='P' || cm[0]=='p'){
                int x,y;
                scanf("%d %d",&x,&y);
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
        printf("Case %d:\n",i);
        for( z = 0 ; z<n-1 ; z++)
        {
            printf("%d ",arr[z]);
        }
        cout<<arr[z]<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
