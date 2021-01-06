#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
bool isPrime (int n)
{
    if (n<=1) return 0;
    if (n==2) return 1;
    if (!(n%2)) return 0;
    for (int i=2; i*i<=n; i++){
        if (!(n%i))
            return 0;
    }
    return 1;
}
void primes ()
{
    v.push_back(2);
    int i=3,cnt=1;
    for (i; cnt<15001; i+=2)
    {
        if (isPrime(i))
        {
            cnt++;
            v.push_back(i);
        }
    }
}
int main ()
{
    int n,k;
    primes();
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&k);
        printf("%d\n",v[k-1]);
    }
    return 0;
}
