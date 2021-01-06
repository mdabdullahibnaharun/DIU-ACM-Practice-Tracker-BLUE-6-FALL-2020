#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (c*c + b*b == a*a) )
        {
            printf("Case %d: yes\n",i);
        }

        else printf("Case %d: no\n",i);
    }

    return 0;
}
