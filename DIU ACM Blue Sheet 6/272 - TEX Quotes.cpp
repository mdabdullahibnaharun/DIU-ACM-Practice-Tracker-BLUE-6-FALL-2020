#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<stdio.h>
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
    char str[1024];
    bool open = true;

    while (gets(str))
    {
        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] == '"')
            {
                if (open){
                    printf("``");
                    }
                else{
                    printf("''");
                }
                open = !open;
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
}

int main()
{
    solve();
    return 0;
}
