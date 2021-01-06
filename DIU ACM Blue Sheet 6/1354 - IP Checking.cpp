#include <stdio.h>
#include <math.h>
using namespace std;
/*
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
*/
bool cmp(int a, int b)
{
    return a>b;
}

bool decToBinary(int m, int n)
{
    int num = m;
    int rem = 1,i=1 , bin =0;
    while (num > 0)
    {
        rem += n%2;
        n /= 2;
        bin += rem*i;
        i *= 10;
    }
    if(bin!=n)
        return false;
    else
        return true;
}

int main()
{
    int p=1,t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        int i,j,k,l;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&i,&j,&k,&l);

        if(decToBinary(a,i) && decToBinary(b,j) && decToBinary(c,k) && decToBinary(d,l)){
            printf("Case %d: Yes\n",p++);
        }
        else{
            printf("Case %d: No\n",p++);
        }
    }
}

