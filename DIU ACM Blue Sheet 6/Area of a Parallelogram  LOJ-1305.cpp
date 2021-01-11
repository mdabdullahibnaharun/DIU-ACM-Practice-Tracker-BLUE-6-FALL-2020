#include<bits/stdc++.h>
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

void solve(int n){
    int i, Ax, Ay, Bx, By, Cx, Cy , Dx , Dy , eq , area;
    for(i = 1 ; i <= n ;i++){
        scanf("%d %d %d %d %d %d",&Ax, &Ay, &Bx, &By, &Cx, &Cy);
        //formula of 4th cordinates
        Dx = Ax + Cx - Bx;
        Dy = Ay + Cy - By;
        //Area of a Parallelogram formula
        eq = ((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax));
        //Area values may be negative due to the position of the co-ordinate
        if(eq<0)
            eq*=-1;
        area = 0.5 * eq;
        printf("Case %d: %d %d %d\n",i,Dx,Dy,area);
    }
}

int main(){
    int test = 0 ;
    cin>>test;
    solve(test);
    return 0;
}
