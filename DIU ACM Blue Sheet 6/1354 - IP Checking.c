#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define pi acos(-1)
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
#define gcr getchar
#define endl "\n"
#define Square(x) ((x)*(x))
#define Cube(x) ((x)*(x)*(x))
#define Sync() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define fileout fopen("output.txt","w");
#define filein fopen("input.txt","r");
#define error fopen("error.txt","w");
#define inf le9+1
#define continuekey printf("\n\tPress any key to continue.....")
#define gc getch()
#define sys system

int decToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;

}

int main()
{
    int T,a,b,c,d,i,j,k,l;
    scanf("%d",&T);
    int p = 1;
    while(T--)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&i,&j,&k,&l);

        if(decToBinary(a)==i&&decToBinary(b)==j&&decToBinary(c)==k&&decToBinary(d)==l)
        {
            printf("Case %d: Yes\n",p++);
        }
        else
        {
            printf("Case %d: No\n",p++);
        }

    }
    return 0;

}
