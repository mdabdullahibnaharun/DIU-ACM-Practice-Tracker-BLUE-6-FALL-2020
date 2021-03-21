#include<bits/stdc++.h>

#include <iostream>
#include <algorithm>
#include <string>
#include <stdbool.h>
#include <cstdio>
#include <iterator>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define sqre(x) ((x)*(x))
#define lli  long long int
#define ull  unsigned long long
typedef long long ll ;
const int MOD = 1000000007;
const int MAX = 100005;
const int MAXN = 1e5 + 3;
//JUDGE_ID: 304332WQ
void printSin(int i)
{
    int j;
    for ( j =1 ; j <= i ; j++)
    {
        printf("sin(%d",j);
        if ( j == i)
        {
            for (j = 0 ; j<i ; j ++){
                printf(")");
            }
            break;
        }
        else
        {
            if (j%2!=0){
                printf("-");
            }
            else {
                printf("+");
            }
        }
    }
}

void solve()
{
    int i,k,n;
    scanf("%d",&n);
    k=n;
    for(i=1; i<n; i++)
        printf("(");
    for(i=1; i<=n; i++,k--)
    {
        printSin(i);
        if(i!=n)
        {
            printf("+%d)",k);
        }
    }
    printf("+1\n");
}

int main()
{
    solve();
    return 0;
}
