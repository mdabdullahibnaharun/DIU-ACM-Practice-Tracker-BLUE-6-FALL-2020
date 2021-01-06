#include <bits/stdc++.h>
using namespace std;

#define TRUE 1
#define FALSE 0
#define pi acos(-1.0)
#define PI 3.1415926535897932384626
#define MAX 100
#define ll long long
#define lli long long int
#define ull unsigned ll
#define ui unsigned int
#define us unsigned short
#define puf push_front
#define pub push_back
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define mod 1000000007
#define mx 300010
#define gc getchar
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define print(x) cout<<x<<endl;
#define nl cout<<"\n"
#define Square(x) ((x)*(x))
#define Cube(x) ((x)*(x)*(x))
#define Sync() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define fileout fropen("output.txt","w",stdout);
#define filein fropen("input.txt","r",stdin);
#define error fropen("error.txt","w",stderr);
#define inf le9+1
#define point(x) fixed<<setprecision(x)
#define all(x) x.begin(), x.end()
#define printcase(n) cout << "Case " << tc << ": " << n <<endl
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl
#define ig cin.ignore()
bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int t,sum=0;
    string str;
    cin>>t;
    ig;
    for(int i = 1 ; i <= t ; i++)
    {
        int n;
        cin>>n;
        sum=0;
        ig;
        printf("Case %d:\n",i);
        for(int j = 1 ; j <= n ; j++)
        {
            cin>>str;
            if(str=="donate")
            {
                int x;
                cin>>x;
                sum+=x;
            }
            else
            {
                cout<<sum<<endl;
            }
        }


    }
    return 0;

}
