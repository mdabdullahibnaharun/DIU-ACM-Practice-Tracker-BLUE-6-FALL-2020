#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
typedef long long ll ;

int s[10],n;
int cnt=0;

void isLucky(int k){
    int sum1=0,sum2=0;

    if(n==k){
        for(int i = 0 ; i < n/2 ; i++){
            sum1 += s[i];
        }
        for(int i = n/2 ; i < n ; i++){
            sum2 += s[i];
        }
        if(sum1==sum2)
        cnt++;
    }

    else{
        for(int i = 0 ; i <= 9 ; i++){
            s[k] = i;
            isLucky(k+1);
        }
    }

}


int main(){
    scanf("%d",&n);
    isLucky(0);
    printf("%d\n",cnt);
    return 0;
}


/*
TEST CASE 1
0
0
TEST CASE 2
1
0
TEST CASE 3
2 10
TEST CASE 4
3
0
TEST CASE 5
4 670
TEST CASE 6
5
0
TEST CASE 7
6 55252
TEST CASE 8
7
0
TEST CASE 9
8 4816030
*/

/*concept

The concept of each case is we divide the input to be equal example, case x
== 4 mean that there are four digits, so we will divide in to 2 2. Then we for loop it
straight forward ( brute force ) and when it hits the equation : a + b == c + d (
sum of first two digits is equal to sum of last two digits) the output will be
increment by 1. However, the runtime exceed in timus, so because there are
only 5 case available ( 2, 4, 6, 8, others) we decide to modify the code to be
simple by :
elif x == 2:
ans = 10
elif x == 4:
ans = 670
elif x == 6:
ans = 55252
elif x == 8:
ans = 4816030
and if it doesn’t match any case the output will be zero as we had set it in the
beginning.
ans = 0


*/