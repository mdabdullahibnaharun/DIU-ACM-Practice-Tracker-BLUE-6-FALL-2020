#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        b = 0;
        cin >> a;
        if(a > 10)b = a-10;
        cout << b << " " << a-b << '\n';
    }
    return 0;
}
