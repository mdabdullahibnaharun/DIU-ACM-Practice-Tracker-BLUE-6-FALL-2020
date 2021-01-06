#include<bits/stdc++.h>
using namespace std;

int arr[20];
/*
int fibo(int n)
{
    if(n<=1) return n;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n,fibostart = 0;
    cin>>n;
    fibo(n);
    for(int i=1; i<=n; i++)
    {
        cout<<fibo(fibostart)<<" ";
        fibostart++;
    }

    return 0;
}
*/
int fibo(int n)
{

   if(n==0 || n==1) return n;
   else return fibo(n-1)+fibo(n-2);
}

int main()
{


      int n;
      cin>>n;
      fibo(n);
      for(int i=0; i<=n; i++){
         cout<<fibo(i)<<" ";
      }

    return 0;
}









//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:
