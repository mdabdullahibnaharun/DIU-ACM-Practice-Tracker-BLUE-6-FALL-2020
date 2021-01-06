#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    vector< unsigned long long int > a;
    unsigned long long int b;
    setprecision(4);
    while(cin>>b)
    {
        a.push_back(b);
    }
    reverse(a.begin(),a.end());
    for(auto i:a)
    {
        double x =sqrt(i);
        cout<<x<<endl;
    }
    return 0;
    */

        int j,i=0;
        unsigned long long int a;
        double b[131072];
        while(scanf("%llu",&a)!=EOF)
        {
            b[i]=sqrt(a);
            i++;
        }
        i=i-1;
        for(j=i; j>=0; j--)
        {
            printf("%.4lf\n",b[j]);
        }
        return 0;

}
