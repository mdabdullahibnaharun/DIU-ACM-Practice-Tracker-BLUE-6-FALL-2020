#include <iostream>
using namespace std;

void solve()
{
    int n;
    int x,y;
    int m,k;
    while(scanf("%d",&n))
    {
        if(n==0)break;

        scanf("%d %d",&m,&k);

        while(n--)
        {

            scanf("%d %d",&x,&y);

            if(m==x || k==y)
                printf("divisa\n");
            else if(x>m && y>k)
                printf("NE\n");
            else if(x<m && y>k)
                printf("NO\n");
            else if(x<m && y<k)
                printf("SO\n");
            else
                printf("SE\n");

        }
    }
}

int main()
{
    solve();
    return 0;
}
